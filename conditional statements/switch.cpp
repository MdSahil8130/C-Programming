#include<iostream>

using namespace std;


int main () {
    int a=3;
    int b=4;
    int op ;
    cin>>op;
    cout<<"enter the operation u want to perform "<<endl;
    ;
    

    switch(op){
        case 1 : cout<<a+b;
        break;
        case 2 : cout <<a-b;
        break;
        case 3 : cout <<a*b;
        break;
        case 4 : cout << "not a valid operation";
        break;

    }

    return 0;
}