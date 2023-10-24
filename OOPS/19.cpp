#include <iostream>

using namespace std;

class number
{
    int a;

public:
    number(){
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    // creating copy constructor
    number(number &obj)
    {
        cout << "Copy constructor called !!! " << endl;
        a = obj.a;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    void print()
    {
        cout << "The number for this object is : " << a << endl;
    }
};

int main()
{
    number x, y(9) , z2;
    y.print();
    number z(y); // copy constructor  called
    z.print();

    number z3 = y;
    z3.print(); //copy constructor not called


    return 0;
}