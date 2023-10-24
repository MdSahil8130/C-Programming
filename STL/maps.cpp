#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void print(map<int,string> m){
    cout<<m.size()<<endl;
    for(auto pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main () {
    map<int,string> m;
    m[1] = "abc";
    m[5] = "gfg";
    m[3] = "bdc";
    m.insert({4,"sos"});
    // map<int,string> :: iterator it;
    // for( it = m.begin(); it != m.end() ;it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    cout<<"*****************"<<endl;
    // for(auto value: m ){
    //     cout<<value.first<<" "<<value.second<<endl;
    // }
    print(m);
    auto it = m.find(3);
    if(it == m.end()){
        cout<<"NO vALUE"<<endl;
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    return 0;
}