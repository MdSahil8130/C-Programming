#include <iostream>

using namespace std;

class complex
{
    int real;
    int imag;
    friend complex sum(complex o1, complex o2);

public:
    // void setdata(int a, int b){
    //     real =a ;
    //     imag = b;
    // }

    complex(int a, int b) // Constructor function
    {
        real = a;
        imag = b;
    }

    void print(void)
    {
        cout << "Complex numer is : " << real << "+" << imag << "i" << endl;
    }
};

complex sum(complex o1, complex o2)
{
    complex o3(0, 0);
    o3.real = o1.real + o2.real;
    o3.imag = o1.imag + o2.imag;
    return o3;
}

int main()
{
    complex c1(3, 4), c2(4, 3), c3(0, 0);
    c1.print();
    c2.print();
    c3.print();
    complex c3 = sum(c1,c2);
    c3.print();


    return 0;
}