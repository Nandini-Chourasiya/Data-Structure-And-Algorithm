#include<iostream>
using namespace std ;

bool BinarySearch(int arr[], int n ,int key){
  int start =0;
  int end=0;
  int mid = (start+end)/2;

  for( int i=0; i<n;i++){
      if( arr[i] == key){
      return 1;
      }
      else if(arr[i] > key){
        end = mid-1;
      }
      start = mid+1;
  }
  return 0;
}

int main(){
int n ;
 cout<<"Enter the size of array:";
 cin>>n;
 int arr[n];
 cout<<"Enter the element of array:";
 for( int i =0 ; i<n ;i++){
    cin>>arr[i];
 }
 bool found = BinarySearch(arr, n ,9);
 if(found)
 cout<<"Element is present ";
 else
 cout <<"Element is not present";
}