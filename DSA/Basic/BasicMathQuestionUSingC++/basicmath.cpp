#include<iostream>
using namespace std;
int main(){
// int n,ld,rev=0,sum=0,i;
// cout<<"enter n number = ";
// cin>>n;

// while(n>0)
//  {
//     ld=  n%10; // last digit print krega
//   cout<<ld<<endl;;// then print
//   count=count+1;// ye count krega 
//   n=n/10; // aage wali tino value store
 
//   }
//   cout<<count<<endl;

// while(n>0){
//     ld=n%10;
//     rev=(rev*10)+ld; // reverse number ka code he
//     n=n/10;
// }
// cout<<"rev num is : "<<rev;
// while(n>0){

// ld=n%10;
// rev=(rev*10)+ld;
// n=n/10;
// }
// if(rev==n){
// cout<<" it is pallindrome";
// }
// else{
// cout<<"not pallindrome";
// }
// int temp=n;// because loop ke baad n zero hojata he isly
// while(n>0){
//     ld=n%10;
//     sum=sum+(ld*ld*ld);
//     n=n/10;

// }
// if(temp==sum)
//     cout<<"armstrong ";
//     else
//     cout<<"not armstrong";

// for(int i=1;i<=n;i++){
   
//  if(n%i==0){ // print all divisors
//         cout<<i<<" ";
//     }

//  }


// for(int i=1;i<=n;i++){
//     if(n%i==0){ //prime number is exactly two factore hone chiyhe like 1 & itself.
//         count++;
//     }
// }
// if(count==2)
//     cout<<"prime";
//     else
//     cout<<"not prime";

int l=10 ,r=20;
for(int n=l;n<=r;n++ ){
    int count=0;
for(int i=1;i<=n;i++){
    if(n%i==0){ //prime number is exactly two factore hone chiyhe like 1 & itself.
        count++;
    }
}

if(count==2)
    cout<<n<<" ";
   

}
}