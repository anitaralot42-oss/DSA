#include<iostream>
using namespace std;

void largest(int n , int arr[]){
       int largest = arr[0]; // largest hamehsa yaha bhr likhayega
    for(int i = 0; i<n; i++){
        //   int largest = arr[0]; ye ese nhi likhge kyuki largest li iteration is loop tk hi lchlegi bh largest exist nhi kr rha he
     
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"largest element :"<<largest;

}

int main(){
    int n,arr[50];
    cout<<"enter number of array : ";
    cin>>n;
    cout<<"enter array element :";
    for(int i= 0;  i < n; i++){
        cin>>arr[i];
    }
    largest(n, arr);



}