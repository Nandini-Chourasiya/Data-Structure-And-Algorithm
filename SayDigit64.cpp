#include<iostream>
using namespace std;

void SayDigit( int n , string str[]){
     
    if( n == 0)
    return ;  

   int m = n%10;
   SayDigit(n/10,str);   
   cout<<str[m]<<" ";
}

int main(){

   string str[10]={"Zero","one","two","three","four","five","six","seven","eight","nine"};
   SayDigit(415,str);
   
} 