#include <iostream>

using namespace std;

class c2; // forward declaration

class c1
{
    int data;
    friend void exchange(c1 &x, c2 &y);

public:
    void setdata(int val1)
    {
        data = val1;
    }

    void display()
    {
        cout << "The value od c1  : " << data << endl;
    }
};

class c2
{
    int num;
    friend void exchange(c1 &x, c2 &y);

public:
    void setdata(int val2)
    {
        num = val2;
    }
    void display()
    {
        cout << "The value of c2  : " << num << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.data;
    x.data = y.num;
    y.num = temp;
}

int main()
{

    c1 obj1;
    obj1.setdata(12);
    obj1.display();

    c2 obj2;
    obj2.setdata(13);
    obj2.display();

    exchange(obj1, obj2);
    cout << "The value od c1 becomes : ";
    obj1.display();
    cout << "The value of c2 becomes : ";
    obj2.display();

    return 0;
}