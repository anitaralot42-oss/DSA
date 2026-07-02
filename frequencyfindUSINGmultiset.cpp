#include<iostream>
using namespace std;
#include<set>

int main(){
multiset <int> m = {5, 2, 8, 5, 8 };
int element = 8;
int freq = m.count(element); // yaha count predefine function he stl me

cout<<"frequency of 8 :"<<freq;


}