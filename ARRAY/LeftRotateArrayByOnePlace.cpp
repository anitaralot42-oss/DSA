#include<iostream>

using namespace std;
void LeftRotate(int n , int arr[]){

    int temp = arr[0];  // isme bhi first index ko fix krdiya usko temp varible me store krdiya

     for(int i = 1; i < n; i++){ // yaha loop 1 se start he thikhe
        arr[i-1] = arr[i];  // yaha ese hoga arr[1-1] = arr[1] , arr[0] = arr[1] arr of 1 ki value arr of two me store hoajye

        cout<<arr[i-1]<<" "; // yaha saare prnt kra diye
     }
     cout<<temp; // temp print kra diya last me

}


int main(){
    int n , arr[10];
    cout<<"Enter element of array :";
    cin>>n;

    for(int i = 0; i< n; i++){
        cin>>arr[i];
        
    }
    LeftRotate(n, arr);




}

