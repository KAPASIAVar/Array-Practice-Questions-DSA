/*
Array Subset of another array
Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. 

*/
#include<bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        if(mp.find(a2[i])!=mp.end()){
            mp[a2[i]]--;
        }
        else return "No";
        if(mp[a2[i]]==0)mp.erase(a2[i]);
    }
    return "Yes";
}
int main(){
int a1[] = {11, 1, 13, 21, 3, 7};
int a2[] = {11, 3, 7, 1};
  cout<<isSubset(a1,a2,6,4);
}
