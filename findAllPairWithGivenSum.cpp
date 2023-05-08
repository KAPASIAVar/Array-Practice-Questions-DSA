#include<bits/stdc++.h>
using namespace std;
 vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here  
        vector<pair<int,int>>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<M;i++){
            mp[B[i]]++;
        }
        for(int i=0;i<N;i++){
            if(mp.find(X-A[i])!=mp.end()){
                ans.push_back({A[i],X-A[i]});
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
int main(){
  int A[] = {1, 2, 4, 5, 7};
  int B[] = {5, 6, 3, 4, 8} ;
  int X = 9 ;
  vector<pair<int,int>>ans=allPairs(A,B,5,5,X);
  for(int i=0;i<ans.size();i++){
  cout<<ans[i].first<<" "<<ans[i].second<<endl;}
}
