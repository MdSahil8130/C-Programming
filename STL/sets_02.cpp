#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main () {
    set<string> s;

    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        string st;
        cin>>st;
        s.insert(st);
    }

    cout<<"******************"<<endl<<endl;

    for(auto value :s){
        cout<<value<<endl;
    }


    return 0;
}