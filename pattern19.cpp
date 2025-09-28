#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int i =1;
     char ch = 'A';
    while(i<=n){
        int j =1;
        while(j<=i){
            char ch = 'A'+i+j-2;
        cout<<ch<<" ";
        ch++;
        j++;
        }
        cout<<endl;
        i++;
    }
}