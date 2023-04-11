#include<bits/stdc++.h>
using namespace std;
void convertToWave(int n, vector<int>& arr){
  
        for(int i=1;i<n;i+=2){
            if(arr[i]>arr[i-1]){
                swap(arr[i],arr[i-1]);
            }
            if(arr[i]>arr[i+1] && i<n-1){
                swap(arr[i],arr[i+1]);
            }
            
        }
        
    }
void print(vector<int>v,int n){
for(int i:v){
cout<<i<<" ";
}
  cout<<endl;
}
int main(){
  
 return 0; 
}
