#include<iostream>
using namespace std;
// void prime(int n){
//         int count = 0;
//   for(int i = 1;i <= n; i++){

//   if(n % i == 0){
//     count++;
//   }
// }
//   if(count == 2)
//     cout<<" It's prime";
//     else
//     cout<<"no prime ";
//   }

// int main(){
//     int n;
//     cout<<"enter n : ";

//     cin>>n;

//     prime(n);
// }



// prime find in range eg. 10 to 20
void prime(int a ,int b){
for(int i = a; i <= b; i++)  // ye interval loop chla diya he mene jo 10 to 11 tk chlega
{
    int count = 0; // local varibale bnaya

    for(int j = 1; j <= i; j++) // ye first iteration chlegi 1 to 10 then 2 iteration 1 to 11 ....
    {
        if(i % j == 0) // eg. 10 % 1 
        {
            count++;
        }
    }


    if(count == 2)
    {
        cout << i << " "; // yaha jitee bhi count prime honge woh print honge
    }
}
}

int main(){
    int a = 10 , b =20;
    prime(a,b);
}