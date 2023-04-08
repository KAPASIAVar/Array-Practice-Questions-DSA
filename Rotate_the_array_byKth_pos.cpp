#include <iostream>
using namespace std;
int *Reverse(int arr[], int i, int j)
{

    while (i <= j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    return arr;
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int *rotake_k(int arr[], int n, int k)
{
    if (k > n)
        k = k % n;
    arr = Reverse(arr, 0, n - 1);
    arr = Reverse(arr, 0, k - 1);

    arr = Reverse(arr, k, n - 1);
    return arr;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 8, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    rotake_k(arr, n, 2);
    print(arr, n);
}
