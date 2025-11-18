#include<iostream>
using namespace std ;

int FirstOcc( int num){
   
   int ans = 0;
   int start = 0;
   int end = num;
   int mid = (start+end) /2;
   
   while(start <= end){  // 1 2 3 4 5 6   start + (end-start)/2 
    int square = mid*mid;
    if( square == num){
      return mid;
    }
    else if(square > num){
     end = mid-1;
    }
    else{
      ans = mid;
      start = mid+1;
    }
   mid = (start+end) /2;
   } 
   return ans ;
}
int main(){

   int num = 16;
   int m = FirstOcc(num);
   cout<<m; 

}
