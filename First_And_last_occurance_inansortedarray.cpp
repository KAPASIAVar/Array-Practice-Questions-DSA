// First and last occurance of an element in a sorted array
#include <bits/stdc++.h>
using namespace std;
int leftocc(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int rightocc(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            low=mid+1;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
pair<int, int> func(int arr[], int n, int key)
{
    pair<int, int> x;
    x.first = leftocc(arr, n, key);
    x.second = rightocc(arr, n, key);
    return x;
}

int main()
{
    int arr1[] = {1, 2, 2, 2, 3, 4};
    pair<int, int> s = func(arr1, 6, 2);
    cout << s.first << " " << s.second << endl;
}
