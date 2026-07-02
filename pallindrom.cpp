#include<iostream>
using namespace std;
//  void pallindrome(int n){
//     int rev = 0;
//     int temp = n;
//     while(temp > 0){
//          int last_digit = temp % 10;
//          rev = rev * 10 + last_digit;
//           temp = temp / 10;
        
//     }
//     if(  n == rev ){
//         cout<<"It's pallindrome";
//     }
//     else{
//         cout<<"no pallindrome";
//     }

//  }
// int main(){
//     int n;
//     cout<<"enter n number :";
//     cin>>n;
//     pallindrome(n);

// }


// return function use krke solve kri hu me

int  pallindrome(int n){
    int rev = 0;
    int temp = n;
    while(temp > 0){
         int last_digit = temp % 10;
         rev = rev * 10 + last_digit;
          temp = temp / 10;
        
    }
        if(  n == rev )
          return 1;  // ye condition agr true hui toh 1 answer dedega
    
    else
     return 0; // agr nhi hui toh 0 answer dedega

 }
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    // pallindrome(n) ? cout<<"pallindrome" : cout<< "no"; // ternay operator se ese call krte he
    // cout<< pallindrome(n); // ye sirf 1  ya 0 answer hi dega hamesha
    
    if(pallindrome(n)){
        cout<<"It's pallindrome";

    }
    else{
        cout<<"no pallindrom";
    }
}

