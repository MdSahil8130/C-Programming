#include <iostream>

using namespace std;

int main()
{
    cout << "enter the operation you want to perform\n  ";
    char operation;
    cin >> operation;

    int a = 10, b = 5;
    int c;

    // c=a+b ;
    // c=a-b ;
    // c=a/b ;
    // c=a*b ;

    // char add = 'A';
    // char subtraction = 'S';
    // char division = 'D';
    // char multiplication = 'M';
    // cin >> add >> subtraction >> division >> multiplication;
    if (operation == 'A')
    {
        c = a + b;
        cout << "addition is " << c;
    }
    else if (operation == 'S')
    {
        c = a - b;
        cout << "subtraction is " << c;
    }
    else if (operation == 'D')
    {
        c =(float) a / b;

        cout << "division is " << c;
    }
    else if (operation == 'M')
    {
        c = a * b;
        cout << "multiplication is " << c;
    }
}
