#include<iostream>
using namespace std ;

bool power(){
    int num;
    cout<<"Enter the value of num:";
    cin>>num;

    if(num%2 == 0)
    return true;
    else 
    return false;
}
int main(){
  int answer = power();
  cout<<"Answer:"<<answer;
}