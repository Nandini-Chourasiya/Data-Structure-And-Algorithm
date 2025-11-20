#include<iostream>
using namespace std;


void InsertionSort( int arr[] , int size){

    for( int i =1;i<size ; i++){
     int temp = arr[i] , j = i-1;  // 10 1 4 5
     for( ; j>=0;j--){
        if( arr[j] >= temp){
            arr[j+1] = arr[j];
        }
        else{
            break;
        }
     }
     arr[j+1]=temp; 
    }
}

int main(){

    int arr[] = {1,0,8,7,5,3,5,11};

    InsertionSort(arr,8);
    for( int i : arr){
        cout<<i<<" ";
    }
}