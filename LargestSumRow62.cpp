#include<iostream>
#include<math.h>
#include<climits>

using namespace std;

int LargestSum( int arr[][3] , int row,int col){
    int maxx = INT_MIN;
    for( int i =0;i<row;i++){
        int sum =0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        
        if(sum > maxx)
          maxx=sum;
    }
    return maxx;
}
int main(){
   
    int arr[3][3] = { {1,2,3}, {4,5,6} ,{7,8,9}};
    int k = LargestSum(arr , 3,3);
    cout<<k<<" ";

}