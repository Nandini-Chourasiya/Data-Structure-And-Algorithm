#include<iostream>
using namespace std;

char to_lower( char ch){
  
    if( ch >= 'a' && 'z' >= ch ){
        return ch;
    }
    else 
    {
        char temp = ch + 'A' - 'a';
        return temp;
    }
}

bool CheckPalindrome( char arr[] , int size){

    int i=0;
    int j = size-1;

    while( i <j){
        if( to_lower(arr[i++]) != to_lower(arr[j--]))
        return false;
    }
    return true;
}

int main(){
      char name[5];
      cin>>name;
    cout<<CheckPalindrome(name,5);
}