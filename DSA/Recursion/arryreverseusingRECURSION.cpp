#include<iostream>
using namespace std;

//  void fu(int i,int arr[],int n){ // me ye i,n pass nhi krti hu toh fuction ko pta nhi pdega ki arr start kha se krna he
// if(i>=n) // me kisi bhi orde me pass kr skti hu bs niche main function me bhi jese upr order he wese hi same niche hona chiyhe
// return ; // exit program direct
// swap(arr[i],arr[n-1]);
// fu(i+1,arr,n-1);

// }

// int main(){
// int n,arr[10];
// cout<<"enter n element : ";
// cin>>n;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// fu(0,arr,n);//Ye starting index ha,Ye poora array pass hota hai,Ye array ka size / end limit hai
// for(int i=0;i<n;i++){ 
// cout<<arr[i]<<" ";
// }

void fu(int i,int arr[],int n){ // me ye i,n pass nhi krti hu toh fuction ko pta nhi pdega ki arr start kha se krna he
if(i>=n/2) // ye n/2 isly ky he kyuki isme last me 2/2 hojayega or condtion true hojayegi the program exit
return ; // exit program direct
swap(arr[i],arr[n-i-1]);
fu(i+1,arr,n);

}

int main(){
int n,arr[10];
cout<<"enter n element : ";
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
fu(0,arr,n);//Ye starting index ha,Ye poora array pass hota hai,Ye array ka size / end limit hai
for(int i=0;i<n;i++){ 
cout<<arr[i]<<" ";
}
}