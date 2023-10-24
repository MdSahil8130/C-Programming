// static data members and methods

#include <iostream>

using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id : " << endl;
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "The id of the member is " << id << " with count = " << count << endl;
    }

    static void getcount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count; // default value is = 0 ;

int main()
{
    Employee obj1, obj2, obj3;

    obj1.setdata();
    obj1.getdata();

    Employee ::getcount();

    obj2.setdata();
    obj2.getdata();
    Employee ::getcount();

    obj3.setdata();
    obj3.getdata();
    Employee ::getcount();

    return 0;
}