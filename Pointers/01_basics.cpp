#include<iostream>

using namespace std;

int main () {
    /*
    int num = 5;
    double d = 4.3;

    double *p = &d;
    int *ptr = &num ;

    cout<<"Address of pointer : "<<ptr<<endl;
    cout<<"value at address :  "<<*ptr<<endl;

    cout<<"size of pointer : "<<sizeof(p)<<endl;
    cout<<"size of pointer "<<sizeof(*ptr)<<endl;
    */

    int num = 5;

    int a = num ;

    cout<<"Before : "<<num<<endl;
    a++;
    cout<<"After : "<<num<<endl;

    //with pointer

    int *p = &num ;

    cout<<"Before : "<<num<<endl;
    (*p)++;
    cout<<"After : "<<num<<endl;

    // copying a pointer

    // int *q = p ;

    // cout<< p <<" - "<< q <<endl;
    // cout<< *p <<" - "<< *q <<endl;

    return 0;
}

// #include <iostream>

// using namespace std;

// int main()
// {
//     int num = 5;
//     int *ptr = &num;

//     cout<<"Address of pointer : "<<&ptr<<endl;
//     cout<<"Address of num : "<<ptr<<endl;

//     return 0;
// }