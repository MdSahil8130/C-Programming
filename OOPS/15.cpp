#include <iostream>

using namespace std;

class MAX
{
    int a, b ;
    friend void largest(MAX obj);
public:
    void setdata(); // function declaration
    
};

void MAX ::setdata()
{
    cout << "enter first no. " << endl;
    cin >> a;
    cout << "enter second no. " << endl;
    cin >> b;
};

void largest(MAX obj1)
{
    if (obj1.a > obj1.b)
    {
        cout << obj1.a << " is maximum " << endl;
    }
    else
    {
        cout << obj1.b << " is maximum " << endl;
    }
}

int main()
{
    MAX obj;
    obj.setdata();
    largest(obj);


    return 0;
}