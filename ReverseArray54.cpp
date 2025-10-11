#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int start =0;
    int end = size-1;
    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void PrintArray( int arr[], int size){
    for( int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
int n ;
cout<<"Enter the size of array:";
cin>>n;
int arr[n];
cout<<"Enter the element of array:";
for( int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Reverse Array :";
 reverseArray(arr,n);
 PrintArray(arr,n);
}