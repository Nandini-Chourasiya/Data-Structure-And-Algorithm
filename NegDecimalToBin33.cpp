#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"ENter the value od n:";
    cin>>n;
    
    unsigned int num = n;
    int bits = 32;
    while(bits--){
      cout<<((num>>bits)&1); 
    }
    cout<<endl;
    return 0;
}