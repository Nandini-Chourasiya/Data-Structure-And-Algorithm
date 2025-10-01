#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int prod = 1;
    int sum = 0 ;

    while(n>0){
        int a = n%10;
        sum = sum+a;
        prod = prod*a;
        n=n/10;
    }
   int answer = prod-sum;
    cout<<"Answer is: " <<answer<<endl;
}