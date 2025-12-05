#include<iostream>
using namespace std;

int BinarySearch(int arr[], int element,int start , int end){

    if(start > end)
    return false;
    
    int mid = start+(end-start)/2;
    if( arr[mid] == element){  
        return mid;
    }
    else if( arr[mid] > element ){
        BinarySearch(arr,element,start,mid-1);
    }
    else{
        BinarySearch(arr,element,mid+1,end);
    } 
}

int main()
{
     int arr[5] ={1,2,3,4,5};
    cout<<BinarySearch(arr,3,0,4);
}