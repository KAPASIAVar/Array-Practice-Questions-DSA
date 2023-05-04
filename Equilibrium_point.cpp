#include<iostream>
using namespace std;
int solve(int arr[],int n){
    int arr1[n];
    int x=0;
    for(int i=0;i<n;i++){
        x+=arr[i];
        arr1[i]=x;
    }
    int sum=arr1[n-1];
    for(int i=0;i<n;i++){
        int Lsum=0;
        int Rsum=0;
        Lsum=arr1[i]-arr[i];
        Rsum=sum-arr1[i];
        if(Lsum==Rsum)return i+1;
    }
    if(n==1)return 1;
    else return -1;
}
int solve1(int a[],int n){ // Optimized with time comp-o(n) and space comp-o(n)
    int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        int Rsum=0;
        for(int i=0;i<n;i++){
            sum-=a[i];
            if(sum==Rsum)return i+1;
            Rsum+=a[i];
        }
        return -1;
}
int main(){
int arr[]={1,2,6,4,0,-1};
cout<<solve(arr,6)<<endl;
}
