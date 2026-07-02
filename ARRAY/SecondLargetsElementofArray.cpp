#include<iostream>
using namespace std;

void Largest(int n, int arr[]){
    int large = arr[0];
    int secondLargest = -1;
    for(int i = 0; i < n ; i++){
        if(arr[i]>large ){
            large = arr[i];
        }
        else if(arr[i]> secondLargest && arr[i]!=large)
        {
            secondLargest = arr[i];
        }
    }
     cout<<"SecondLaregest ELement is :"<<secondLargest;

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


