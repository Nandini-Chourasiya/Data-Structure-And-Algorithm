// #include<iostream>
// #include<climits>
// using namespace std;

// int getMax(int arr[],int size){
//    int max = INT_MIN;
//    for( int i=0;i<size;i++){
//     if(arr[i] > max)
//       max=arr[i];
//    }
//    return max;
// }

// int getMin(int arr[], int size){
//    int min=INT_MAX;
//    for( int i=0;i<size;i++){
//     if(arr[i] < min)
//       min=arr[i];
//    }
//     return min;
// }

// int main(){
//  int arr[10]={1,6,7,1000,100,49,59,5,0,-1};
//  cout<<"Maximum :"<<getMax(arr,10)<<endl;
//  cout<<"Minimum :"<<getMin(arr,10)<<endl;
// }






#include<iostream>
#include<climits>
using namespace std;

int getMax( int arr[] , int size){

   int maxi = INT_MIN;
   for( int i=0; i<size; i++){
      maxi = max(maxi , arr[i]);
   }
     return maxi;
} 

int getMin( int arr[] , int size){

   int mini = INT_MAX;
   for( int i=0; i<size; i++){
      mini = min( mini , arr[i]);
   }
    return mini; 
} 

void printArr(int arr[] , int size){

   for( int i=0;i<size ; i++){
      cout<<arr[i];
   }
} 

int main(){
  
   int arr[10] ={ 1,2,309,3,23,323,4,5,334,60};
   cout<<getMax(arr,10)<<endl;
   cout<<getMin(arr,10)<<endl;
  
}