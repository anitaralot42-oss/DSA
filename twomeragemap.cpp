#include<iostream>
#include<map>
#include<set>

using namespace std;
int main(){
    // two merge map
    // map <int ,string> m1{{1,"anita"},{2,"dharmesh"}}; map me bhi key value ko ese store kr kste he
    // map <int, string> m2{{3,"aahana"},{4,"chinu"}};
    // m1.insert(m2.begin(), m2.end()); // isme durse wale ap ko first me insert ese ky he

    // cout<<"concatenated map : {" ;
    // for(auto x : m1){
    //     cout<<"{"<<x.first<<":"<<x.second<<" }";
    // }
    // cout<<"}"<<endl;

    // max , min find using set
    set <int> s = { 3, 5, 7, 9};
    cout<<"max is : "<<*prev(s.end())<<endl; //s.end() ye last wale element ke baad wali location ko print krta he jese ki 4 tph mujr 9 chiyhe toh prev likha pdgea 
    cout<<"min is :"<<*s.begin()<<endl; // muje value chaiyhe toh * lgana pdega isko dereferencing kehete he






}
 