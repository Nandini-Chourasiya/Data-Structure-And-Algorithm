#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cout<<"ENter the value of a and b:";
    cin>>a>>b;
    char ch ;
    cout<<"Enter the value of ch:";
    cin>>ch;

    switch(ch){
     
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        case '%':
        cout<<a%b<<endl;
        break;
    }
}