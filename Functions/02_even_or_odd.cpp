// #include <iostream>

// using namespace std;

// bool iseven(int num)
// {
//     // odd
//     if (num & 1)
//     {
//         return 0;
//     }
//     else//even
//     {
//         return 1;
//     }
// }

// int main()
// {
//     int a;
//     cin >> a;

//     if (iseven(a))
//     {
//         cout << "number is even " << endl;
//     }
//     else
//     {
//         cout << "number is odd " << endl;
//     }

//     return 0;
// }

#include<iostream>

using namespace std;
// 1--> even 
// 0--> odd 
bool iseven(int a){

    if(a&1){
        return 0;
    }
    return 1;
}


int main () {
    int a ;
    cin >> a;

    if( iseven(a)){
        cout<<"number is even "<<endl;

    }
    else{
        cout<<" number is odd "<<endl;
    }

    return 0;
}