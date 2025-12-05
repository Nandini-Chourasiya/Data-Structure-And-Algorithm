#include<iostream>
using namespace std;


bool arraySort( int arr[] , int size , int i){

   if( i == size || i == size-1) //[5,6,7,8]
    return true;
    
    if( arr[i] > arr[i+1]){
    return false;
    }
    else{
       arraySort(arr,size , i++);
    }
 }

int main(){

    int arr[5] = { 1,2,3,4,5};
    cout<<arraySort(arr,5,0);
}