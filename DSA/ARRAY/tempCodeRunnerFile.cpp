#include<iostream>
using namespace std;

void linearSearch(int n, int arr[], int num){

    for(int i = 0; i<n; i++){
        if(arr[i] == num){
            cout<<"It's true : "<<i;
        
        }
       
    }
     cout<<"this number is not in array";



}



int main(){
    int n, arr[50],num;
cout<<"Enter number of array : ";
cin>>n;
cout<<"Enter array : ";
for(int i = 0; i<n; i++){
    cin>>arr[i];
}

cout<<"enter your search number is : ";
cin>>num;

linearSearch(n,arr,num);

}