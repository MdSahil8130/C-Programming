#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main () {
    string s = "My name is Khan";

    // string temp = " ";

    for(int i = 0 ;i <s.size() + 3;i++){
        if( s [i]  == ' '){
            s.insert(i,' ');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
    }

    cout<<temp;
    
    return 0;
}