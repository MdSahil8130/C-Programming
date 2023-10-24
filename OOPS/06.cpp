// Array of objects

#include <iostream>

using namespace std;

class employee
{
    int id;
    float salary;

public:
    void setdata()
    {
        salary = 150;
        cout << "Enter the id : " << endl;
        cin >> id;
    }
    void getdata()
    {
        cout << "Your id is : " << id << endl;
    }
};

int main()
{
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }

    return 0;
}