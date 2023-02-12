#include<iostream>
using namespace std;
int reverse(int x){
    if(x==0)return 0;

    int ans=0;
    while(x!=0){
        int digit=x%10;
        ans=ans*10+digit;
        x/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n)<<endl;

}
