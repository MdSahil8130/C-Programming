// #include <iostream>

// using namespace std;

// class complex
// {
//     int real;
//     int img;

// public:
//     void setdata(int a1, int b1)
//     {
//         real = a1;
//         img = b1;
//     }
//     void sum(complex o1, complex o2)
//     {
//         real = o1.real + o2.real;
//         img = o1.img + o2.img;
//     }

//     void print()
//     {
//         cout << "Complex number is " << real << "+" << img << "i" << endl;
//     }
// };

// int main()
// {
//     complex c1, c2, c3;

//     c1.setdata(1,2);
//     c1.print();

//     c2.setdata(2,1);
//     c2.print();

//     c3.sum(c1,c2);
//     c3.print();

//     return 0;
// }

#include <iostream>

using namespace std;

class complex
{
public:
    int real;
    int img;
    void setdata(int a, int b)
    {
        real = a;
        img = b;
    }

    void sum(complex o1, complex o2)
    {
        real = o1.real + o2.real;
        img = o1.img + o2.img;
    }

    void print(){
        cout<<"complex number is "<<real<<"+i"<<img<<endl;
    }
};

int main()
{
    complex c1,c2 ,c3;

    c1.setdata(1,3);
    c1.print();
    c2.setdata(3,2);
    c2.print();
    c3.sum(c1,c2);
    c3.print();

    return 0;
}