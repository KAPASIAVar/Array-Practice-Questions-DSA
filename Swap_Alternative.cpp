#include <bits/stdc++.h>
using namespace std;
void Swap_Alternative(int arr[], int n)
{
    for (int i = 0; i < n - 1; i+=2)
    {
        swap(arr[i], arr[i + 1]);
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
    int arr1[] = {1, 2, 2, 2, 3, 4};
    print(arr1,6);
    Swap_Alternative(arr1,6);
    print(arr1,6);
}
