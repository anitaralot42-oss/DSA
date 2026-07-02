#include<iostream>
using namespace std;

bool fu(int i,string &s){//matlab variable ki copy nahi banti, original hi use hota hai
if(i>=s.length()/2)
return true;
if(s[i]!=s[s.length()-i-1]) // s.length mtlb=n he ye puri string ki length hhe
return false;
 return fu(i+1,s); //Sabse important concept: Recursion return flow (backtracking)


}

int main(){

string s="MADAM";
cout<<s<<endl;
cout<<fu(0,s);


}