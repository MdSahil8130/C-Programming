#include <iostream>
#include <math.h>

using namespace std;

class point
{
    int x, y;
    friend int distance(point o1, point o2);

public:
    point(int a, int b) // parametrized constructor function
    {
        x = a;
        y = b;
    }

    void print()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

int distance(point o1, point o2)
{
    float dist = 0;
    float a, b, c;
    // a = pow((o1.x) - (o2.x), 2);
    // b = pow((o1.y) - (o2.y), 2);
    // c = a + b;
    dist = sqrt(pow((o1.x) - (o2.x), 2) + pow((o1.y) - (o2.y), 2));
    cout << "Distance between  given points " << dist << endl;
}

int main()
{
    point obj(1, 0), obj2(70, 0);
    obj.print();
    obj2.print();
    distance(obj, obj2);

    return 0;
}