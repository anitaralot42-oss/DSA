#include<iostream>
using namespace std;
// void pattern1(){
//   for(int i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// }
// void pattern2(){
//   for(int i=0;i<4;i++){
//     for(int j=0;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }
// void pattern3(){
//   for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }
// }

// void pattern4(){
//   for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         cout<<i;
//     }
//     cout<<endl;
// }
// }
// void pattern5(){
//   for(int i=0;i<4;i++){
//     for(int j=i;j<4;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }

// void pattern6(){
//   for(int i=1;i<=5;i++){
//     for(int j=i;j<=5;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }
// }
// void pattern7(int n){
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
// }

//   for(int j=0;j<2*i+1;j++)
//   {
//     cout<<"*";
//   }

//   for(int j=0;j<n-i-1;j++)
//  {
//     cout<<" ";
//  }
//  cout<<endl;
// }
// }


// void pattern8(int n){
//   for(int i=0;i<n;i++){
//     for(int j=0;j<i;j++){
//         cout<<" ";
// }

//   for(int j=0;j<2*n-(2*i+1);j++)
//   {
//     cout<<"*";
//   }

//   for(int j=0;j<i;j++)
//  {
//     cout<<" ";
//  }
//  cout<<endl;
// }
// }
// void pattern9(int n){
//       for(int i=0;i<n;i++){
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
// }

//   for(int j=0;j<2*i+1;j++)
//   {
//     cout<<"*";
//   }

//   for(int j=0;j<n-i-1;j++)
//  {
//     cout<<" ";
//  }
//  cout<<endl;
// }
//   for(int i=0;i<n;i++){
//     for(int j=0;j<i;j++){
//         cout<<" ";
// }

//   for(int j=0;j<2*n-(2*i+1);j++)
//   {
//     cout<<"*";
//   }

//   for(int j=0;j<i;j++)
//  {
//     cout<<" ";
//  }
//  cout<<endl;
// }
// }

// void pattern10(int n){
//      for(int i=0;i<n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
//      for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }
//  void pattern11(){
// int start=1;
// for(int i=0;i<4;i++){
//     if(i%2==0)
//     start=1;

// else
// start=0;
 
//  for(int j=0;j<=i;j++){

// cout<<start;
// start=1-start;
// }
 
//  cout<<endl;
// }

//  }


void pattern12(int n){
    for(int i=1;i<=n;i++){

     for(int j=1;j<=i;j++){
        cout<<j;
     }
     for(int j=1;j<=(2*n)-(2*i);j++){
        cout<<" ";
     }
     for(int j=i;j>=1;j--){
        cout<<j;
     }
     cout<<endl;

    }
}

void pattern13(int n){
   int  num=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<num;
        num=num+1;
    }
    cout<<endl;
}
}
 

int main(){
    int n;

cout<<"=====PATTERN PRINT====="<<endl;
cin>>n;

pattern13(n);

 return 0;
}
