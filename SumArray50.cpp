#include<iostream>
using namespace std ;

int SumOfArray(int arr[], int size){
      
    int sum=0;
    for( int i =0; i<size ;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
  int n ;
  cout<<"Enter the size of array:";
  cin>>n;
   
  int arr[n];
  cout<<"Enter the element of array:";
  for( int i=0 ; i<n ;i++){
    cin>>arr[i];
  }
  int answer = SumOfArray(arr,n);
  cout<<"Sum of the element is:"<< answer;
  return 0;
}