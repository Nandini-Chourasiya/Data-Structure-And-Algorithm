#include<iostream>
using namespace std;


int arrSum( int arr[] , int size ){
if(size == 0)
return 0;
return arr[0]+arrSum(arr+1 , --size);
}

int main(){

    int arr[5] = { 1,2,3,4,5};
    cout<<arrSum(arr,5);
}