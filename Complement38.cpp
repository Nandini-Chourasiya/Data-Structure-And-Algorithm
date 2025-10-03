#include<iostream>
using namespace std ;

int main(){
 int n ;
 cout<<"Enter the value of n:";
 cin>>n;
  
 int i=0;
 int arr[32];
while(n!=0){
    arr[i] =n%2;
    n=n/2;
    i++;
}

cout << "Binary = ";
    for (int j = i - 1; j >= 0; j--) {
        cout << arr[j];
    }

    cout << endl;
 
    cout<<"Complement:";
   for (int j = i - 1; j >= 0; j--) {
    if (arr[j] == 0)
        cout << 1;
    else
        cout << 0;
}

}