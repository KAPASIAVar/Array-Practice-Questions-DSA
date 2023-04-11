#include<bits/stdc++.h>
using namespace std;
bool check(vector<long long> A, vector<long long> B, int N) {
        //code here
        multiset<long long>s1,s2;
        for(int i=0;i<N;i++){
            s1.insert(A[i]);
        }
        for(int i=0;i<N;i++){
            s2.insert(B[i]);
        }
        vector<ll>v1,v2;
        for(auto i:s1){
            v1.push_back(i);
        }
        for(auto i:s2){
            v2.push_back(i);
        }
        for(int i=0;i<N;i++){
            if(v1[i]!=v2[i])return 0;
        }
        return 1;
    }
int main(){
  vector<long long>arr1,arr2;
  
return 0;
}
