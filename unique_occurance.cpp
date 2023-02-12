// Unique occurance of an element in an array
#include <bits/stdc++.h>
using namespace std;
bool Unique_occurance(int arr[], int n)
{
    unordered_map<int, int> m;
    unordered_set<int>s;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto i : m)
    {
        if(s.count(i.second)) return false;
        else s.insert(i.second);

        
       
    }
    return true;
    
}
int main()
{
    int arr[] = {5, 2, 6, 3, 5, 6, 6, 3, 3};
    if(Unique_occurance(arr,9)) cout<<"Unique\n";
    else cout<<"Not Unique\n";
}
