#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ans;
        int Max=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=Max){
                Max=a[i];
                ans.push_back(Max);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
int main(){
 int arr[]={16,17,4,3,5,2};
  vector<int>ans=leaders(arr,6);
  for(int i=0;i<n;i++){
  cout<<ans[i]<<" ";
  }
  
}
