#include<iostream>
using namespace std;
int main(){
    int  n = 1, sq,sum;
    cout<<"number is :"<<n<<endl;
    sq = n*n;
    cout<<"square is : "<<sq<<endl;
    int ld = sq % 10;
    int fd = sq / 10;
    sum = ld + fd;
    if( n == sum){
        cout<<"It's neon ";
    }
    else{
    cout<<"no neon number";
    }


}
