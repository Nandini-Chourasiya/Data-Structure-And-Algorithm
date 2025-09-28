#include<iostream>
using namespace std ;
int main(){

    int n ;
    cout<<"Enter the value of n:";
    cin>>n;

    int i=1;
    while( i<=n){
        int j =1;
        char ch ='A'+i-j;
        while( j<=n){
          cout<<ch<<" ";
          ch++;
          j++;
        }
        cout<<endl;
        i++;
    }
}