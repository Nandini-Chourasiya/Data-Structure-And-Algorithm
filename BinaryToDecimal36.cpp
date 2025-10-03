#include<iostream>
#include<math.h>
using namespace std;
int main(){
   
    int n ;
    cout<<"Enter the value of n:";
    cin>>n;
    
    int i=0;
    int ans=0;
    while(n>0){
     int bit =n&1;
     ans += bit*(pow(2,i));
      i++;
     n= n/10;
    }
    cout<<ans;
}