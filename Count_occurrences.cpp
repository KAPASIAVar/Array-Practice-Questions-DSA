#include<bits/stdc++.h>
using namespace std;
int first_occ(int arr[],int n,int key){
    int low=0;
    int ans=-1;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]>key) high=mid-1;
        else low=mid+1;
    }
    return ans;
}
int last_occ(int arr[],int n,int key){
    int low=0;
    int ans=-1;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]>key) high=mid-1;
        else low=mid+1;
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,10,12,12,12,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=first_occ(arr,n,12);
    int y=last_occ(arr,n,12);
    cout<<(y-x)+1;
}
