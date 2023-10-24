#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main () {
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("jhj");
    auto it = s.find("abc");

    for(auto value : s){
        cout<<value<<endl;
    }

    cout<<"$$$$$$$$$$$$$$$4"<<endl;

    for(auto it=s.begin() ; it!=s.end() ; it++){
        cout<<(*it)<<endl;
    }


    return 0;
}