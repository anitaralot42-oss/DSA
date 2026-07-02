    #include <iostream>
    #include<math.h>
    using namespace std;
    int main(){
        double base , exponent , result; // pow() double return krta he
        cout<<"enter base = "<<endl;
        cin>>base;
        cout<<"enter exponent = "<<endl;
        cin>>exponent;
        result = pow(base, exponent);
        cout<<"result is = " <<result;

    }