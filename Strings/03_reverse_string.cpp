#include<iostream>

using namespace std;

char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        return ch -'A' + 'a';
    }
}


int main () {
    
    string str; // string declaration
    cin>>str; // string input
    for(int i =0 ;i< str.size();i++){
        str[i]=tolowercase(str[i]);
    }
    cout<<str<<endl;

    // cout<<"tolowercase "<<tolowercase(str[0])<<endl;

    string str_rev; // making another string but it will increase the space complexity

    // now traversing the loop in opp direction 

    for(int i= str.size()-1 ; i>=0 ; i--){
        str_rev.push_back(str[i]);
    }
    cout<<str_rev<<endl;

    if(str==str_rev){
        cout<<"It is a palindrome "<<endl;
    }
    else{
        cout<<"It is not a palindrome ";
    }
    

    // int s=0;
    // int e=str.size() -1 ;

    // while(s<e){ // without using another string it will only compare 
    //     swap(str[s],str[e]);
    //     s++;
    //     e--;
    // }
    // cout<<str;

    return 0;
}