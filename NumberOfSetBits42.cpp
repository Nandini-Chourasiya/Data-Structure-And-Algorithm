#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n:";
    cin>>n;
   
    int count=0;
    for( int i=1; i<=n;i++){
         int x=i;
        while( x>0){
            if((x&1) == 1)
            count++;
            x=x>>1;
        }
    }
    cout<<count;
}
