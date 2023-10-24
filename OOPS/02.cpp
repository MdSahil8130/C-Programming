#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int rollno, age;

    void setData(); // function declaration
    void getData()
    {
        for (int i = 0; i < 2; i++)
        {
            cout << "Name of the Student is : " << name << endl;
            cout << "Rollno of the student is : " << rollno << endl;
            cout << "Age of the Student is : " << age << endl;
        }
    }
};

void Student ::setData()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the name of  student " << endl;
        // getline(cin, name);
        cin >> name;
        cout << "Enter Rollno of student : " << endl;
        cin >> rollno;
        cout << "Enter the age of student : " << endl;
        cin >> age;
    }
}

int main()
{

    Student obj;

    obj.setData();
    obj.getData();

    // for (int i = 0; i < 3; i++)
    // {
    //     obj.setData();
    //     obj.getData();
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     obj.getData();
    // }

    return 0;
}

// Enter the item with id no :1
// 1001
// Enter the price :
// 21
// Enter the item with id no :2
// 1002
// Enter the price :
// 23
// Enter the item with id no :3
// 1003
// Enter the price :
// 45
// The price os item with id no :1001 is 21
// The price os item with id no :1002 is 23
// The price os item with id no :1003 is 45

// #include <iostream>

// using namespace std;

// class student
// {
//     string name[10];
//     int rollno[10];
//     int count  = 0;

// public:
//     void setdata();
//     void getdata();
// };

// void student ::setdata()
// {
//     cout << "Enter your name : " << endl;
//     cin >> name[count];
//     cout << "Enter your Rollno : " << endl;
//     cin >> rollno[count];
//     count++;

// }

// void student ::getdata()
// {
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Name of the student with rollno " << rollno[i] << " is " << name[i] << endl;
//     }
// }

// int main()
// {
//     student obj;
//     obj.setdata();
//     obj.setdata();
//     obj.setdata();
//     obj.getdata();

//     return 0;
// }