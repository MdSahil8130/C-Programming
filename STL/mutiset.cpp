#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main () {
    
    multiset<string> s;
    s.insert("abc");
    s.insert("abc");
    s.insert("def");

    // auto it = s.find("abc");
    // if(it!=s.end()){
    //     s.erase(it);
    // }
    s.erase("abc");

    for(auto value: s){
        cout<<value<<endl;
    }


    return 0;
}