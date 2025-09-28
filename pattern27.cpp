#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the value of n:";
    cin>>n;

    int i =1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j =1;
        int count = i;
        while( j <=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}