#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main () {
    unordered_set<string> s;

    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }

    int q;
    cin>>q;
    while(q--){
        string st;
        cin>>st;
        if(s.find(st) == s.end()){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}