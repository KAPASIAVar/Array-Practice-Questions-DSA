/*
Given an unsorted array A of size N that contains only positive integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.

In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.
Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int i=0,j=0;
        long long sum=0;
        vector<int>v;
        if(s==0) return {-1};
        while(j<n and i<n )
        {
            
            
            if(sum+arr[j]<=s)
            {
                sum+=arr[j];
                j++;
                
                
            }
            else
            {
                sum-=arr[i];
                i++;
            }
            if(sum==s)
            { 
            v.push_back(i+1);
            v.push_back(j);
            return v;
                
            }
            
            
            
            
        }
        return {-1};
        
        
    }
int main(){
int A[] = {1,2,3,7,5};
  vector<int>ans=subarraySum(A,5,12);
  for(int i=0;i<ans.size();i++){cout<<ans[i]<<" ";}
}
