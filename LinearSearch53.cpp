#include<iostream>
using namespace std ;

bool linearSearch( int arr[], int size , int element ){
   
    for( int i=0 ; i<size ;i++){
       if(arr[i] == element)
       return 1;
    }
    return 0;
}
int main(){
 int n ;
 cout<<"Enter the size of array:";
 cin>>n;
 int arr[n];
 cout<<"Enter the element of array:";
 for( int i =0 ; i<n ;i++){
    cin>>arr[i];
 }
 bool found = linearSearch(arr, n,60);
 if(found)
 cout<<"Element is present ";
 else
 cout <<"Element is not present";
}