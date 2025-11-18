#include<iostream>
using namespace std ;

void Bubblesort( int arr[] , int size){
    bool swap1 = 0;
    for( int i =0 ; i<size ; i++){
        for( int j =0 ;j<size-i-1 ; j++){
            if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
            swap1 = 1;
        }
    }
    if( swap1 == 0)
        return;
}

}
int main(){

}