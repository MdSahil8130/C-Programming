#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main () {

    string name = "shivam";
    stack<char> st;

    for(int i =0;i<name.length();i++){
        char ch = name[i];
        st.push(ch);
    }

    string ans = " ";

    while(!st.empty()){
        char ch  = st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout<<"answer is "<<ans<<endl;


    return 0;
}