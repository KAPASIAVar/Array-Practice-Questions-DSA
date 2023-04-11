#include<bits/stdc++.h>
using namespace std;
void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        for(int i=0;i<n;i+=k){
            int x=i;
            int y=min(i+k-1,n-1);
            while(x<y){
                int temp=arr[x];
                arr[x]=arr[y];
                arr[y]=temp;
                x++;
                y--;
            }
        }
    }
int main(){
 int arr[]={3,5,7,2,1};
  
}
