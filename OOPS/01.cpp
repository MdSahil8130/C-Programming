// #include <iostream>

// using namespace std;

// class Employee
// {
// private:
//     int a, b, c;

// public:
//     int e, d;

//     void setData(int a1, int b1, int c1); // function  declaration
//     void getData()
//     {
//         cout << "The value of a is " << a << endl;
//         cout << "The value of b is " << b << endl;
//         cout << "The value of c is " << c << endl;
//         cout << "The value of d is " << d << endl;
//         cout << "The value of e is " << e << endl;
//     }
// };

// void Employee ::setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main()
// {
//     Employee Sahil; // object creation

//     // Sahil.a = 89 ;//  invalid because we cannot access this outside the class employee
//     Sahil.e = 34;
//     Sahil.d = 9;
//     Sahil.setData(1, 2, 4);
//     Sahil.getData();

//     return 0;
// }

#include <iostream>

using namespace std;

class employee
{
public:
    int id;
    int age;

    // member function inside the class
    void setdata(int a, int b);
    // void setdata(int a, int b)
    // {
    //     id = a;
    //     age = b;
    // }

    void getdata()
    {
        cout << "The id of the empoyee : " << id << endl;
        cout << "The age is " << age << endl;
    }
};

// member outside the class

void employee ::setdata(int a, int b)
{
    id = a;
    age = b;
}

int main()
{
    // creation of object
    employee obj;
    obj.setdata(101, 25);
    obj.getdata();

    return 0;
}