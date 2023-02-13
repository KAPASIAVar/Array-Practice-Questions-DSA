#include<bits/stdc++.h>
using namespace std;
void rightRotate(int arr[],int n){
	
	int last=arr[n-1];
	for(int i=n-1;i>=0;i--){
		arr[i]=arr[i-1];

	}
	arr[0]=last;
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	
    int arr[]={4,3,7,5,8,1};
    print(arr,sizeof(arr)/sizeof(arr[0]));
    rightRotate(arr,sizeof(arr)/sizeof(arr[0]));
    print(arr,sizeof(arr)/sizeof(arr[0]));
}
