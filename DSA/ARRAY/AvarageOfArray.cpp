#include<iostream>
using namespace std;
void avg(int arr[]){
    int sum = 0,avgg;
      for(int  i = 0; i < 5 ; i++){
        sum = sum + arr[i];
        avgg = sum/5;

      }
      cout<<"sum is : "<<sum<<endl;
      cout<<"Avearge is :"<<avgg<<endl;
    }




int main(){
    int  arr[5] = {1 ,2, 3, 4, 5};
    cout<<"Array is :";
    for(int  i = 0; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
    avg(arr);





}