// call by value and calln by reference

#include <iostream>

using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapreference(int &a ,int &b){
    int temp = a ;
    a = b ;
    b = temp ;
}

int main()
{

    int x = 3, y = 9;
    cout << "The value of x is " << x << " The value of y is " << y << endl;
    swapreference(x,y);
    cout << "The value of x is " << x << " The value of y is " << y << endl;
    // call by value

    // swap using call by reference using pointers

    return 0;
}