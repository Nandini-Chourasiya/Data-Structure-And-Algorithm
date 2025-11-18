#include<iostream>
using namespace std ;

void  SelectionSort( int arr[] ,int size){

    for ( int i =0;i<size;i++){
        int minindex = i;
    for( int j =i+1 ; j<size ;j++){
       
        if(arr[j] < arr[minindex]){
        minindex = j;
       
    }
    }
    swap(arr[minindex],arr[i]);
    }

   
}