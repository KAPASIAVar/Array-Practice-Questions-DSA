#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]!=0 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==0 && arr[j]==0){
            i++;
        }
        else j--;
    }
    i=0;j=n-1;
    while(i<=j){
        if(arr[i]>1 && arr[j]==1){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==0 || arr[i]==1 && arr[j]==1)i++;
        else j--;
            
        
    }
    
}
int main(){
    int arr[]={0 ,2 ,2 ,0 ,1 ,0,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);
    for(int i:arr)cout<<i<<" ";
}
