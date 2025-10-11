#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[],int size){
   int maxi = INT_MIN;
   for( int i=0;i<size;i++){
    maxi = max(maxi,arr[i]);
   }
   return maxi;
}

int getMin(int arr[], int size){
   int mini=INT_MAX;
   for( int i=0;i<size;i++){
    mini = min(mini, arr[i]);
}
 return mini;
}

int main(){
 int size;
 cout<<"Enter the size of array:"<<endl;
 cin>>size;
 int arr[size];
 cout<<"Enter thr element of array:";
 for( int i =0 ; i<size;i++){
    cin>>arr[i];
 }
 cout<<"Maximum :"<<getMax(arr,10)<<endl;
 cout<<"Minimum :"<<getMin(arr,10)<<endl;
}