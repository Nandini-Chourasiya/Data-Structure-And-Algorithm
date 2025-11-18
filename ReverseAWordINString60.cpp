#include<iostream>
using namespace std;

string reverse(string sh){

    int start = 0;
    for( int i =0 ; i<=sh.length() ;i++){
        if( i == sh.length() || sh[i] == ' ' ){
           int end = i-1;

           while(start < end){
             swap(sh[start++],sh[end--]);
           }
             start = i+1;
        }
    }
    return sh;
}

int main(){

    string sh;
getline(cin, sh);
    cout<<reverse(sh);
}