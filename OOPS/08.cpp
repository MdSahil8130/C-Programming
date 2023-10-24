// friend function

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/

#include <iostream>

using namespace std;

class complex
{
    int real;
    int imag;

public:
    void setdata(int a1, int b1)
    {
        real = a1;
        imag = b1;
    }

    // friend complex setdata(int a, int b);

    friend complex sumcomplex(complex o1, complex o2);

    void print()
    {
        cout << "Complex number is : " << real << "+" << imag << "i" << endl;
    }
};

// function

complex sumcomplex(complex o1, complex o2)
{

    complex o3;
    // o3.setdata((o1.real + o2.real), (o1.imag + o2.imag));
    o3.real = o1.real + o2.real;
    o3.imag = o1.imag + o2.imag;

    return o3;
}

int main()
{

    complex c1, c2, sum;
    c1.setdata(1, 2);
    c1.print();

    c2.setdata(3, 4);
    c2.print();

    sum = sumcomplex(c1, c2);
    sum.print();

    return 0;
}
