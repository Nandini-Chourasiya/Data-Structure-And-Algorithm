#include<iostream>
using namespace std ;
int main(){

    int n ;
    cout<<"ENter the valaue of n:";
    cin>>n;

    if( n<=1){
    cout<<"The given number is not prime";
    return 0;
    }

    bool isPrime = true;
    for( int i = 2; i<n ; i++){
      if(n%i == 0)
       isPrime = false;
      break;
    }
    if(isPrime)
    cout<<"Number is prime ";
    else
    cout<<"Number is not prime";
}