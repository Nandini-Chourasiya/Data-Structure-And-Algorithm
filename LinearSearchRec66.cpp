#include<iostream>
using namespace std;

int linearSearch(int arr[],int size, int element,int i){
   
    if(i == size )
    return -1;

    if(arr[i] == element){
        return i;
    }
    else{
      return linearSearch(arr,size,element,++i);
      
    }
}

int main(){

    
    int arr[5] ={1,2,3,1,1};
    cout<<linearSearch(arr,5,3,0);
}