#include<iostream>
using namespace std;
 int gcd(int a ,int b){
    while(a > 0 && b > 0){
        if(a > b)
        a = a % b; // reminder aayega
        else
        b = b % a;

    }
    if(a == 0)
    return b;
    else
    return a;

 }

int main(){
    int a ,b ;
     int g = gcd(12,18);
   int lcm = (12*18)/g;
   cout<<"LCM: "<<lcm;
    // cout<<"GCD : "<<gcd(52,10);
  


}