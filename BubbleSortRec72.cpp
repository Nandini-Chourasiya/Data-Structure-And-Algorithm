#include<iostream>
using namespace std;

void bubbleSort( int arr[] ,int size,int i){

    if( i == size)
    return;

    for( int j =0;j<size-1;j++){
       
        if( arr[j] > arr[j+1])
        swap( arr[j] , arr[j+1]);
    }
    bubbleSort( arr,size-1,i);
}

int main()
{
    int arr[7] = { 2,3,4,1,0,12,9};
    bubbleSort(arr,7,0);
    for( int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

}
