#include<iostream>
using namespace std;

void reverseString(string &str,int i , int j ) 
{
    if( i > j )
    return ;

    swap(str[i],str[j]);
    reverseString(str,i+1,j-1);
}

void reverseString(string &str,int i ) 
{
    if( i >= str.length()/2 )
    return ;

    swap(str[i],str[str.length()-1-i]);
    reverseString(str,i+1);
} 


int main(){

    string str = "Nandini";
    int n = str.length();
    reverseString(str,0);
    cout<<str;
}