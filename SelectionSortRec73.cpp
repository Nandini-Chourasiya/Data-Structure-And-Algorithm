#include<iostream>
using namespace std;

void SelectionSort( int arr[] ,int size){

   for( int i =0;i<size-1;i++){
    int minindex = i;

    for( int j=i+1;j<size;j++){

        if( arr[minindex] > arr[j] ){
           minindex = j;
        }
    }
    swap(arr[i],arr[minindex]);
   }
}

int main(){
     
    int arr[7] = { 2,3,4,1,0,12,9};
    SelectionSort(arr,7);
    for( int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}
