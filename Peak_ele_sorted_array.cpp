#include<bits/stdc++.h>
using namespace std;
int peak_element(int arr[],int n){
   int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])return mid;
        else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1])high=mid;
        else low=mid;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,10,20,25,10,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<peak_element(arr,n);
}
