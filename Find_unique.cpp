#include <iostream>
using namespace std;
int find_unique(int arr[], int n)
{
   
    int ans=0;
    for(int i=0;i<n;i++){

        ans=ans^arr[i];
       
    }
    return ans;
}
int main()
{
    int arr[]={2 ,3, 1, 6, 3, 6, 2};
    cout<<find_unique(arr,7);

}
