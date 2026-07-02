#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;
int main(){
vector<int> v={1,2,3,4,5}; // vector intialize
//     vector<int> v;
//     v.push_back(1); // vector me value ese add bhi kr skte he , vector hamesha 0 idx se start hota he
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.emplace_back(6); // ye  function bhi vaue add hi krega

//     v.pop_back();      // ye func delete krna iche se value ko

//    for(int val : v){ // or fir ese print krate he value ko

//     cout<<val<<" ";

//    }
//    cout<<endl;
//    cout<<"value idx 3 : "<<v[3]<<" "<<v.at(2);
// }

// vector<int>v(3,10); // 3 size ka  he  vector and same value 10, 3 times
// vector <int>v2(v1); // copy vector 

// v.erase(v.begin());
// v.erase(v.begin()+0);
// v.erase(v.begin()+1);
// v.insert(v.begin()+2,100);// mid me value insert krni he toh
// v.clear();// all value erase

// for(int val : v){ // loop all value print  krega vector ki
//     cout<< val<<endl; 
 
// }
// cout<<*(v.begin())<<endl; // first value print krta he

// cout<<*(v.end()); ye last value ke baad wala elemnt print prnt krkega mtlb 0 print krega hamesha

//  cout<<v.size()<<endl;   // vector ki size prit krega

//     cout<<v.capacity()<<endl;// capacity pr koi frk nhi pdta he agr value delete krdi jaaye fir bhi mtb vector ki size vhi rehti he

//     cout<<"empty : "<<v.empty(); // check krte he ki vector empty hua he ya nhi answer 1 print


// vector<int> ::iterator it; //ITERATOR USE

// for( it = v.begin(); it != v.end(); it++){
//     cout<<*(it)<<" "; // direferance krna jisse value print krega
// }


// vector<int> :: reverse_iterator rit;
// for( rit =v.rbegin(); rit !=v.rend(); rit++){ // reverse value print krega
//     cout<<*(rit)<<" ";
// }

//  Reverse the vector
//     reverse(v.begin(), v.end()); ese bhi kr skte he  

//     for (auto i : v)
//         cout << i << " ";


// for(auto rit =v.rbegin(); rit !=v.rend(); rit++){ //isme upr iterator likhne ki jarut nhi he direct apn AUTO  keyword likh skte he woh samj jata he
//     cout<<*(rit)<<" ";
// }

// pair<int, int> p={3,5}; // two value ka ek pair bna skte he
// cout<<p.first<<endl; // 3 print hoga isse
// cout<<p.second<<endl; // 5 print hoga

// pair<string, int> p={"ANITA",5}; // pair me string bhi pass kr skte he
// cout<<p.first<<endl;
// cout<<p.second<<endl;

// pair<int,pair<int,int>> p={1,{2,3}};// pair with pair
// cout<<p.first<<endl; // 1 print
// cout<<p.second.first<<endl; // 2 print
// cout<<p.second.second; 3 print

// vector <pair<int,int>> v={{1,2},{3,4},{5,6}};// vector with pair
// for( pair<int,int> p : v){
//     cout<<p.first<<" "<<p.second<<endl;
// }
// cout<<endl;



// vector<pair<int,int>> v={{1,2},{3,4},{5,6}};
// v.push_back({7,8}); // insert krdeta he value ko last me
// v.emplace_back(9,10); // without curly braces atomatically insert ye bhi last me
// for(auto p: v){ // auto keyword bhi use kr skti hu me isme
//     cout<<p.first<<" "<<p.second<<endl;
// }



// stack <int> s;

// s.push(1);
// s.push(2);
// s.push(3);

// stack <int> s2;
// s2.swap(s);

// // while(!s.empty()){ // jb tk stack empty nhi hojaye
// //     cout<<s.top()<<" ";
// //     s.pop();

// // }

// cout<<"s size : "<<s.size()<<endl;
// cout<<" s2 size :"<<s2.size();


// queue <int> q;
//  q.push(1);
//  q.push(2);
//  q.push(3);

//  while(!q.empty()) // jb tk queue empty nhi ho jaye 
// {
// cout<<q.front()<<" ";
//  q.pop();

// }




// in 4 ko associative container khete he

// set / multiset
// set <int> s; // declaration
// s.insert(10); // hamesha sort hoga
// s.insert(20);
// s.insert(30);
// s.insert(10); // duplicate value allow nhi krta he set
// s.insert(20);
// for(int x : s){
//     cout<<x<<" ";
// }

// multiset
// multiset <int> ms;
// ms.insert(10);
// ms.insert(20);
// ms.insert(10);
// ms.insert(30);
// ms.insert(40);
// for( int x : ms){ // ye ascending order me sort hoga
//     cout<<x<<" ";
// }

// multiset <int, greater<int>> ms; // agr muje descending orde me krna he toh ese krna pdega
// ms.insert(10); // Aur bata dena ki greater<int> STL ka predefined comparator hai jo descending order maintain karta hai. 👍
// ms.insert(20);
// ms.insert(10);
// ms.insert(30);
// ms.insert(40);
// for( int x : ms){
//     cout<<x<<" ";
// }




// map /multimap
// map jo he woh keyvalue pair store krta he 
// eg = 1 anita ,isme   1 key he or anita value he
// eg = 2 dharmesh , same isme bhi ese hi he

// map <int ,string> mp;
// mp[1] = "anita"; // map me har element pair me hota he 1->anita
// mp[2] = "dharmesh"; // key value hamesha unique rhti he map me
// mp[3] = "aahna";
// mp[1] ="anju"; // agr mere isme key value duplicate hui toh purai key overwrite / replace hojayegi nhi wali value se
// for(auto x : mp){
//     cout<<x.first<<" "<<x.second<<endl; // isme x.first jo he key he and x. second value he

// }

multimap <int , string> m;
// m[1] = "anita"; // multimap me ye operator use nhi kr skte he []

// m.insert({1,"anita"}); // isme ese hi store krenge hamesha hi
// m.insert({2,"dharmesh"});
// m.insert({1,"anju"}); // isme multipal key value store hoti he
// for(auto x: m){
//     cout<<x.first<<" "<<x.second<<endl;
// }


 
}