#include<iostream>
using namespace std;
// globally declare of array  max size is 10^7
// array is contigous memory allocation

int main(){
    int arr[6]; // isko yaha initialzation nhi ky toh garbage value show hogi
    // local variable declare so max size is 10^6
   for(int i = 0 ; i<6; i++){ // Entire array  access
    cout<<arr[i];
   }



}