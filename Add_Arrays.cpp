#include <bits/stdc++.h>
using namespace std;
void addArrays(int a[],int n,int b[],int m){
    int i=n-1;
    int j=m-1;
    vector<int>ans;
    int carry=0;
    while(i>=0 && j>=0){
        int sum=a[i--]+b[j--]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);

    }
    while(i>=0){
        int sum=a[i--]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);

    }
    while(j>=0){
        int sum=b[j--]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    reverse(ans.begin(),ans.end());
    for(int i:ans)cout<<i;
}
int main() {
    int a[]={2,5,7};
    int b[]={2,4};
    addArrays(a,3,b,2);

}
