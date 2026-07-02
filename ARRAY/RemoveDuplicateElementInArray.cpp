#include<iostream>
using namespace  std;
int main(){
    int arr[7] ={1,1,2,2,2,3,3};
    int unique = arr[0];
    for(int i = 0; i < 7; i++){

   cout<<arr[i]<<" "<<endl;

    }
    cout<<"Unique element :"<<unique<<" ";

     for(int i = 0; i< 6; i++){
        

        if(unique !=arr[i+1]){

            unique = arr[i+1];
            cout<<unique<<" ";
        
        }
    
      
       
    }
  
      return 0;

}
