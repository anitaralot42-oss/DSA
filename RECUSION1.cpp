#include<iostream>
using namespace std;

// void print(){
//     cout<<"anita";
//     print();
// }
//  int count=0;
// void print(){
//     if(count==3){ //base condition
//     return ;
//     }
//      cout<<count<<endl;
//     count++;
//     print();
// }

// void name(int i,int n){
// if(i>n){
//     return ;
// }
// cout<<"ANITA"<<endl;
//  name(i+1,n);

// }


// void name(int i,int n){
// if(i>n){
//     return ;
// }
// cout<<i<<endl;
// name(i+1,n);
// }

// void name(int i,int n){
//     if(i<1){
//         return ;
//     }
//     cout<<i<<endl;
//     name(i-1,n);
// }


// void backtaking(int i,int n){
// if(i<1){
//     return;

// }
// backtaking(i-1,n);  // 1 TO N NUMBER PRINT KREGA But backtracking
// cout<<i<<endl;
// }

// void backtaking(int i,int n){ // N TO 1 NUMBER PRINT KREGA But backtracking
// if(i>n){
//     return;

// }
// backtaking(i+1,n);
// cout<<i<<endl;
// }


// void fu(int n,int sum){ // is function me varible same rkh skte he
// if(n<1){
//     cout<<sum;
// return ;
// }

// fu(n-1,sum+n);// ye sumestion krega 1 to n ka//sum bhi isi function me lena he


// int fu(int n){

// if(n==0){
//     return 0; //or yaha int data type lgaya he toh 0 return krna pdega
// }
// return n+ fu(n-1);// yaha kuch return hora he toh  in data type lagyenge


// }

// int fu(int n){

// if(n==0){
//     return 1; //yeh factorial ka program he yaha return 1 isly ky he kyuki multiply krne pr answer 0 nhi aaye 
// }
// return n * fu(n-1);// yaha kuch return hora he toh  in data type lagyenge


// }



int main(){ 
int n;
cout<<"enter n : ";
cin>>n;
cout<<fu(n); // yaha se call or print dono hojayenge


}