#include <iostream>

using namespace std;
class y;
class x
{
    int data;

public:
    void setdata(int value)
    {
        data = value;
    }
    friend void add(x, y);
};

class y
{
    int num;

public:
    void setdata(int value)
    {
        num = value;
    }
    friend void add(x, y);
};

void add(x a, y b)
{
    cout << "sum is : " << a.data + b.num;
}

int main()
{
    x a1;
    a1.setdata(3);
    y b1;
    b1.setdata(4);

    add(a1, b1);

    return 0;
}