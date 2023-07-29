#include<bits/stdc++.h>
using namespace std;
void solve(int arr1[],int n,int arr2[],int m){
    int carry=0;
    vector<int>ans;
    int i=n-1;
    int j=m-1;
    
    while(i>=0 && j>=0){
        int sum=arr1[i]+arr2[j]+carry;
        carry=sum/10;
        ans.push_back(sum%10);
        i--;
        j--;
        
    }
    while(i>=0){
        int sum=arr1[i]+carry;
        carry=sum/10;
        ans.push_back(sum%10);
        i--;
    }
    while(j>=0){
        int sum=arr2[j]+carry;
        carry=sum/10;
        ans.push_back(sum%10);
        j--;
    }
    while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        ans.push_back(sum%10);
    }
    reverse(ans.begin(),ans.end());
    for(int i:ans)cout<<i;
}
int main(){
    int arr1[]={1,2,3};
    int arr2[]={4,5};
    solve(arr1,3,arr2,2);
}
