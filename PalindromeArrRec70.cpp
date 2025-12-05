#include<iostream>
using namespace std;

bool PalindromeString(string &str,int i ) 
{
    if( i >= str.length()/2 )
    return true;

    if(str[i] != str[str.length()-1-i]){
        return false;
    }else{
     PalindromeString( str, i+1);
    }
   
} 

int main(){

        string str = "amma";
    int n = str.length();
  cout<<PalindromeString(str,0);
}