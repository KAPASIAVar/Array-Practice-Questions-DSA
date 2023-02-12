#include <bits/stdc++.h>
using namespace std;
void Move_zeroes_to_last(int arr[], int n)
{
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
            continue;
        }
        v.push_back(arr[i]);
    }
    while(count--){
        v.push_back(0);
    }
    int k=0;
    for(auto i:v) arr[k++]=i;
}
int main()
{
    int arr[]={0,3,0,2,0,10,4};
    Move_zeroes_to_last(arr,7);
    for(auto i:arr){
        cout<<i<<" ";
    }
}
