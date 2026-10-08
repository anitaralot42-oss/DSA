#include<iostream>
using namespace std;
int main(){
int n,ld,rev=0;
cout<<"enter digit number:";
cin>>n;
while(n>0){
ld = n%10;
rev=(rev*10)+ld;
n= n/10;

}
cout<<"reverse number is : "<<rev;

}
