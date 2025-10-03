#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the value of n:";
    cin>>n;
    
    int digit =0;
    int ans=0;
    while(n!=0){
         digit = n%10;
         ans = (ans*10)+digit;
         n=n/10;
    }
    cout<<ans;
}