#include<bits/stdc++.h>
using namespace std;
int first_occ(int arr[],int n)
{
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==0){
            ans=mid;
            high=mid-1;
            //low=mid+1;
        }
        else{
            low=mid+1;
        }
        
    }
    return ans;
}
int last_occ(int arr[],int n){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==0){
            ans=mid;
            low=mid+1;
        }
        else{
            low=mid+1;
        }
        
    }
    return ans;
}
int countZeroes(int arr[], int n) {
    // code here
    int x=first_occ(arr,n);
    int y=last_occ(arr,n);
    if(x==-1 && y==-1 )return 0;
    int ans=(y-x)+1;
    return ans;
}
int main(){
    int arr[]={1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countZeroes(arr,n);
}
