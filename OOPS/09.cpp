#include <iostream>

using namespace std;

class complex; // forward declaration
// class Calculator;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(complex, complex); // function declaration
    // {
    //     return o1.real + o2.real;
    // }
};

class complex
{
    int real;
    int imag;
    // Aliter: Declaring the entire calculator class as friend
    // friend class Calculator;

    friend int Calculator ::sumrealcomplex(complex, complex);

public:
    void setdata(int a, int b)
    {
        real = a;
        imag = b;
    }

    void print()
    {
        cout << "Complex number is : " << real << "+" << imag << "i" << endl;
    }
};

int Calculator ::sumrealcomplex(complex o1, complex o2)
{
    return o1.real + o2.real;
}

int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.print();
    c2.setdata(3, 4);
    c2.print();

    Calculator calc;
    int res = calc.sumrealcomplex(c1, c2);
    cout << "The sum of real part of o1 and o2 is : " << res << endl;

    return 0;
}

