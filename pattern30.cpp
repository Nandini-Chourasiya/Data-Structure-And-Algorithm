#include<iostream>
using namespace std ;
int main(){
    
    int n ;
    cout<<"ENter the value of n:";
    cin>>n;
    int i =1;
    while( i<=n){
        int num =1;
        int j =1; 
        while(j<n-i+1){
            cout<<num;
            num++;
            j++;
        }
    int start = (i-1)*2;
    int k=1;
    while(k<=start){
        cout<<"*";
        k++;
    }
    num = n-i+1;
    int l=1;
    while(l<=n-i+1){
        cout<<num;
        num--;
        l++;
    }
    cout<<endl;
    i++;
    }
    return 0;
}