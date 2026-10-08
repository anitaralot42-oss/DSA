
#include<iostream>
using namespace std;
void sorting(int arr[] , int n ){
   for(int i = 0; i<=n-2; i++){ // n-2 tk isly  chlaya he kyuki last waa element automatically sort hota he and apni postion sahi jgh lete he
       int min = i; // first index ko hamesha min manlo
      for(int j = i ;j <=n-1 ; j++){
         if(arr[j]< arr[min]){
            min = j;
         }
      }
     // swap 
     int temp;
     temp = arr[min];
     arr[min] = arr[i];
     arr[i] = temp;

   }


}
int main(){
   int arr[100] ,n;
   cout<<"enter  n number of array:";
   cin>>n;
   for(int  i = 0 ;i < n ; i++){
      cin>>arr[i];
   }
   sorting(arr,n);

   // print

   for(int i=0 ;i<n ; i++){
      cout<<arr[i]<<" ";
   }

}