#include<iostream>
using namespace std;

bool equal(int n , int arr1[] , int arr2[]){
    for(int i = 0 ; i < n ; i++){
        if(arr1[i] != arr2[i]){   // Agar koi bhi element alag mil jaye, false return karo.
            return false;

        }
       return true; // Agar poora loop khatam ho jaye aur sab elements same hon, tab true return karo.
    }


}

int main(){
    int n, arr1[10], arr2[10];
    cout<<"Enter elemt of array :";
    cin>>n;
    cout<<"Firt array :";
    for(int i = 0; i <n ; i++){
        cin>>arr1[i];
    }
    cout<<"second array:";
    for(int i = 0; i< n ; i++){
        cin>>arr2[i];


    }
    if(equal(n , arr1,arr2)){
        cout<<"not equal";

    }
    else{
        cout<<"Array is sorted";
    }




}