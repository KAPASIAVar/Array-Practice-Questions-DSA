#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)return mid;
        if(arr[low]<=arr[mid]){
            if(arr[low]<=key && arr[mid]>key){
                high=mid-1;
            }
            else low=mid+1;
        }
        else{
            if(arr[high]>=key && arr[mid]<key){
                low=mid+1;
            }
            else high=mid-1;
        }
        
        
    }
    return -1;
}
int main(){
    int arr[]={9, 10, 2, 5, 6, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,n,8);
}
