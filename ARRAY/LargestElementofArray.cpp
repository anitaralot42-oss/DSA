#include<iostream>
using namespace std;
// three solution of array
// 1. brute solution
// 2. Better sol
// 3.Optimal sol.
// first soltion is brute solution sort the array and last element peak of array
// TC is o(nlogn)
// SC is o(1)
// no better solution but
// optimal solution is

void Largest(int n, int arr[]){
    int large = arr[0];
    for(int i = 0; i < n ; i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
     cout<<"Large ELement is :"<<large;

}


int main(){
    int n,arr[10];
    cout<<"Enter element of array :";
    cin>>n;
    cout<<"Enter array :";
    for(int i = 0; i<n ;i++){
        cin>>arr[i];
    }
    Largest(n,arr);
    

    return 0;
}