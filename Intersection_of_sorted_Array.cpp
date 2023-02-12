// Intersection of two arrays
// Given two sorted Arrays
#include <bits/stdc++.h>
using namespace std;
void Intersection(int arr1[], int n, int arr2[], int m)
{
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr1[i] == arr2[j])
        {
            cout<< arr1[i] << " ";
            i++;
            j++;
        }
        else
            j++;
    }
}
int main()
{
    int arr1[] = {1, 2, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 3};
    Intersection(arr1, 6, arr2, 4);
}
