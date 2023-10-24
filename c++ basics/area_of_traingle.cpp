// #include <iostream>
// using namespace std;

// int main()
// {
//     float a, b, h;
//     cout << "enter the value of base and height ";
//     cin >> b >> h;
//     a = (b * h) / 2.0;
//     cout << "area of triangle is " << a;
//     return 0;
// }

// To find the area of triangle

#include<iostream>

using namespace std;


int main () {
    int b,h;
    cout<<"Enter base and height\n";

    cin>>b>>h;
    float area=(b*h)/2.0;

    cout<<"The area of triangle is "<<area;


    return 0;
}