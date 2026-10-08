#include<iostream>
using namespace  std;
int main(){
    int arr[7] ={1,1,2,2,2,3,3};
    int unique = arr[0]; // mene isme firt elememt ko unique man liya 
    for(int i = 0; i < 7; i++){

   cout<<arr[i]<<" "<<endl; // ye entire array access krne ke liye normal loop he

    }
    cout<<"Unique element :"<<unique<<" "; // yaha se first element print hojayaga

     for(int i = 0; i< 6; i++){ // ye loop 0 to 5 tk hi chlegaa kyuki last wala elemt i+1 hoke out of bound hojayega
        

        if(unique !=arr[i+1]){ // ye condition 

            unique = arr[i+1];
            cout<<unique<<" ";
            // Tc is o(n)
            // sc is o(1)
        
        }
    }
   return 0;

}
