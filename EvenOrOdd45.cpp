#include<iostream>
using namespace std ;

bool isEvenOrOdd( int n){

    if( n&1)
    return 0;
    else
    return 1;
}
int main(){
 int n ;
 cout<<"Enter the value of n:";
 cin>>n;

 if( isEvenOrOdd(n))
 cout<<"Number is even";
 else
 cout<<"Number is odd";
}