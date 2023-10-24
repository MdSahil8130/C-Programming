#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


int main () {
    string s = "424802380";

    // sort(s.begin(),s.end(),greater<int>());

    cout<<s<<endl;

    sort(s.begin(),s.end());
    for(int i = s.size() - 1 ; i>=0;i--){
        cout<<s[i];
    }



    return 0;
}