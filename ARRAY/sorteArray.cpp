#include<iostream>
using namespace std;
bool sort(int n, int arr[]){
    for(int i=1; i<n ; i++){ // yaha loop 1 se hi start krna hoga
        if(arr[i] >= arr[i-1]){ 
            // isko dry run krke dekha
        return true; // yaha mene isly print nhi krya kyuki jitni baar loop chlega utni baar print hota he isly niche kridya he mene
        }
         
    }
     return false;


}
int main(){
    int n,arr[50];
    cout<<"enter number of array : ";
    cin>>n;
    cout<<"enter array element :";
    for(int i= 0;  i < n; i++){
        cin>>arr[i];
    }
    // sort(n, arr); // ye me nhi likhngi toh bhi chlega
    if(sort(n,arr)){
        cout<<"array sorted!!"; // yeh mene isly likha he kyuki upr if condition agr true hui toh he array soted print hojayega 

    }
    else{
        cout<<"unsorder array";
    }

}