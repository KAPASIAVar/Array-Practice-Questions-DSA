#include<bits/stdc++.h>
using namespace std;

void print(int arr[][4],int n,int m){
    int start_col=0;
    int start_row=0;
    int end_col=m-1;
    int end_row=n-1;
    int total=n*m;
    int x=0;
    while(x<total){
        
        for(int cc=start_col;cc<=end_col && x<total;cc++){
            cout<<arr[start_row][cc]<<" ";
            x++;
        }
        start_row++;
        for(int rr=start_row;rr<=end_row && x<total;rr++){
            cout<<arr[rr][end_col]<<" ";
            x++;
        }
        end_col--;
        for(int cc=end_col;cc>=start_col && x<total;cc--){
            cout<<arr[end_row][cc]<<" ";
            x++;
        }
        end_row--;
        for(int ss=end_row;ss>=start_row && x<total;ss--){
            cout<<arr[ss][start_col]<<" ";
            x++;
        }
        start_col++;
        
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++)cin>>arr[i][j];
    }
    print(arr,n,4);
}
