#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the valye of n:";
    cin>>n;

    int i=1;
    while(i<=n){
        int start = n-i+1;
        while(start){
         cout<<"*";
         start--;
        }
        int j =1;
        while(j<=i){
            cout<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

