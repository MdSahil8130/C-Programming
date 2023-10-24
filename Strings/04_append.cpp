#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


int main () {
    
    string s1="nincompoop";
    string s2="abc";

    // // s1.append(s2); // inbuild function in cpp

    // cout<<s1<<endl;

    // // compare function 

    // // cout<<s1.compare(s2)<<endl;

    // // clear function
    // // s1.clear();
    // // cout<<s1;

    // // erase function

    s1.erase(3,3); 
    cout<<endl<<s1<<endl;

    // // find function

    // cout<<s1.find("poo")<<endl;
    // // length of string 
    
    // cout<<s1.length();

    // // substring 

    //  string s = s1.substr(6,4);

    // cout<<endl<<s;

    // string s3="sahil";

    // sort(s3.begin(),s3.end());
    // cout<<endl<<s3;

    // sorting an array usinf=g inbuilt functiion

    // int arr[5]={5,4,3,2,1};

    // sort(arr,arr+5); // in this we have to give starting and ending pointer 

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    
    
    return 0;
}