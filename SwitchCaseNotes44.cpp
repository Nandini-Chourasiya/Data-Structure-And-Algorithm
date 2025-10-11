#include<iostream>
using namespace std;

int main(){
    
    int amount , remaining;
    cout<<"ENter the amount:";
    cin>>amount;
    int notes100 =0, notes50=0 , notes20=0,notes1=0;

    remaining = amount;

    switch(1){

        case 1:
        notes100 = remaining/100;
        remaining = remaining%100;

        case 2:
        notes50 = remaining/50;
        remaining = remaining%50;

         case 3:
        notes20 = remaining/20;
        remaining = remaining%20;

         case 4:
        notes1 = remaining/1;
        remaining = remaining%1;
    }

    cout<<"The current breakdown is :"<<endl;
    cout<<"Notes of 100 are:"<<notes100<<endl;
    cout<<"Notes of 50 are:"<<notes50<<endl;
    cout<<"Notes of 20 are:"<<notes20<<endl;
    cout<<"Notes of 1 are:"<<notes1<<endl;
}