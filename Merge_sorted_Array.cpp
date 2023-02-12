#include <bits/stdc++.h>
using namespace std;
void func(int arr1[], int n, int arr2[], int m)
{
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == 0)
        {
            continue;
        }
        st.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(arr2[i]);
    }
    int k = 0;
    for (auto i : st)
    {
        arr1[k++] = i;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[] = {1, 2, 3, 0, 0, 0};
    int arr2[] = {2, 5, 6};
    func(arr1, 6, arr2, 3);
    print(arr1, 6);
}
