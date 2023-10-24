#include <iostream>

using namespace std;

class complex
{
    int real;
    int imag;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is create
    complex(void); //  constructor declaration
    void print()
    {
        cout << "Complex number is : " << real << "+" << imag << "i" << endl;
    }
};

complex ::complex(void)   //This is a default constructor as it takes no parameters
{
    real = 2;
    imag = 3;
}

int main()
{
    complex obj1;
    obj1.print();

    return 0;
}

/*
characteristics of constructor

1. it should be declared in the public section of the class
2. they are automatically invoked the object ie created
3. they cannot return values and do not have any return types
4. it can have default aruguements
5. we cannot refer to their address








*/