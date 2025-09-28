#include<iostream>
using namespace std ;

int main(){
  
    int n ;
    cout<<"Enter the value of n:";
    cin>>n;

   //  for( int i =0 ; i<n ; i++){
   //     for( int j =0 ; j<=n ; j++){
   //        cout<<'*';
   //     }
   //     cout<<endl;
   //  }
   
   int i =1;
   while( i<=n ){
      int j =1;
      while( j<=n ){
         cout<<"*";
         j=j+1;
      }
      cout<<endl;
      i=i+1;
   }
}