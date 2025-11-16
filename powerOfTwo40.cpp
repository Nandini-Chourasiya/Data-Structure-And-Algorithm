#include<iostream>
using namespace std ;
int main(){

    int n ;
    cout<<"Enter the value of n:";
    cin>>n;
    if(n<=0)
    cout<<"False";
    if(n==1)
    cout<<"True";
    
    for( int i=2;i<=n;i*=2){ //n&(n-1) == 0
        if(i==n)
      cout<<"True";
    }
   cout<<"False";
}