#include<iostream>
using namespace std;

// int fact(int n){

//     if( n==1)
//     return 1;
//     return fact(n)*fact(n-1);
// }

// 

// void Counting(int n){
   
//     if( n==1){
//         cout<<n;
//         return ;
//     }
    
//     Counting(n-1);
//     cout<<n;
// }

// int Fibonnaci(int n){
   
//     if( n==1){
//         return 1;
//     }

//     if( n ==0)
//     return 0;

//     return Fibonnaci(n-1)+Fibonnaci(n-2);
// }

int SortedArray(int arr[],int size){
   
   if(size == 0  )
   return 0;

  return arr[0]+SortedArray(arr+1,size-1);
}

int main(){
    int arr[5]={1,2,1,4,5};

    cout<<SortedArray(arr,5);

 return 0;

}
