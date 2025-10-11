#include<iostream>
using namespace std ;

bool EvenOrOdd( int a){
    if( a&1)
    return 0;
    return 1;
}
int main(){
int num;
cout<<"Enter the value of num:";
cin>>num;
if(EvenOrOdd(num))
cout<<"Number is Even";
else
cout<<"NUmber is odd";
}