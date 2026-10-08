#include<iostream>
using namespace std;

void reverse(int n,int arr[]){
    for(int i = 0; i<n;i++){
        for(int j = n-1; j>0;j--){

            swap(arr[i],arr[j]);
        }

    }
}


int main(){
    int n, arr[100];
    cout<<"enter nuber of array : ";
    cin>>n;
    cout<<"enter array : ";
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
    reverse(n,arr);

}