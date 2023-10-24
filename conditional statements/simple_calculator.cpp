#include<iostream>

using namespace std;


int main () {
    int a,b;

    cout<<"Enter the calue of a "<< endl;
    cin>>a;

    cout<<"Enter the calue of b "<< endl;
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform "<<endl;
    cin>>op;

    switch( op ){
        case '+' : cout<<(a+b)<<endl;
        break;
        case '-' : cout<<(a-b)<<endl;
        break;
        case '*' : cout<<(a*b)<<endl;
        break;
        case '/' : cout<< float (a/b)<<endl;
        break;

        default : cout<<"enter  a valid  operation "<<endl;

    }


    return 0;
}