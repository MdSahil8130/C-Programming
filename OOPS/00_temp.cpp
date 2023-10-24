// #include <iostream>

// using namespace std;

// class employee
// {
// public:
//     string Name;
//     string Company;
//     int Age;

//     void getdata()
//     {
//         cout << "Name - " << Name << endl;
//         cout << "company - " << Company << endl;
//         cout << "age - " << Age << endl;
//     }
//     employee(string name, string company, int age) // parametrised constructor
//     {
//         Name = name;
//         Company = company;
//         Age = age;
//     }
// };

// int main()
// {

//     employee obj1 = employee("sahil", "company", 20);
//     // obj.name = "SAHIL";
//     // obj.company = "gesture";
//     // obj.age = 20;
//     obj1.getdata();

//     employee obj2 = employee("Simran", "Amazon", 19);
//     obj2.getdata();

//     return 0;
// }

// #include <iostream>

// using namespace std;

// class AbstractEmployee
// {
//     virtual void AskForPromotion() = 0;
// };

// class employee : AbstractEmployee
// {
// protected:
//     string name;
//     string company;
//     string gender;
//     int age;

// public:
//     // employee(string naam, string Company, int Age)
//     // {
//     //     name = naam;
//     //     company = Company;
//     //     age = Age;
//     // }

//     void setdata()
//     {
//         cout << "Enter your Name " << endl;
//         getline(cin, name);
//         cout << "Enter your company name " << endl;
//         getline(cin, company);
//         cout << "Enter your age " << endl;
//         cin >> age;
//     }

//     void setgender()
//     {
//         cout << "Enter your gender : " << endl;
//         getline(cin, gender);
//     }
//     string getgender()
//     {
//         return gender;
//     }

//     void getdata();
//     // {
//     //     cout << "Name of the employee : " << name << endl;
//     //     cout << "Name of the company : " << company << endl;
//     //     cout << "The age of the employee : " << age << endl;
//     // }

//     void AskForPromotion()
//     {
//         if (age > 30)
//         {
//             cout << name << "You got Promoted! " << endl;
//         }
//         else
//         {
//             cout << name << ",sorry No promotion for you " << endl;
//         }
//     }
// };

// void employee ::getdata()
// {
//     cout << "Name of the employee : " << name << endl;
//     cout << "Name of the company : " << company << endl;
//     cout << "The age of the employee : " << age << endl;
// }

// class Developer : public employee
// {
// public:
//     string skill;
//     // Developer(string Skill)
//     // {
//     //     skill = Skill;
//     // }
//     void data()
//     {
//         cout << " Enter your skill " << endl;
//         getline(cin, skill);
//     }

//     void fixbug()
//     {
//         cout << name << " fixed bug using c++ " << endl;
//     }
// };

// class teacher : public employee
// {
// public:
//     string subject;
//     void setter(){
//         getline(cin,subject);
//     }
//     void getdata()
//     {
//         cout << name << " is preparing for " << subject << endl;
//     }
// };

// int main()
// {
//     employee obj1;
//     // obj1.setdata();
//     // obj1.getdata();
//     // obj1.AskForPromotion();
//     Developer d;
//     // d.setdata();
//     // d.getdata();
//     // d.setdata();
//     // d.data();
//     // d.fixbug();

//     teacher t;
//     t.setter();
//     t.getdata();

//     return 0;
// }

#include <iostream>

using namespace std;

class student
{
    string name;
    int rollno;
    int age;

public:
    void setdata()
    {
        cout << "Enter the name of the student " << endl;
        getline(cin, name);
        cout << "Enter the roll no of the student " << endl;
        cin >> rollno;
        cout << "Enter the age of the student " << endl;
        cin >> age;
    }
    void getdata()
    {
        cout << "Name of the student " << name << endl;
        cout << "Roll no of the student " << rollno << endl;
        cout << "Age of the student " << age << endl;
    }
};

// void student ::getdata()
// {
//     cout << "Name of the student " << name << endl;
//     cout << "Roll no of the student " << rollno << endl;
//     cout << "Age of the student " << age << endl;
// }

int main()
{

    student obj[3];
    for (int i = 0; i < 3; i++)
    {
        obj[i].setdata();
        obj[i].getdata();
    }
    // for (int i = 0; i < 3; i++)
    // {
    //     obj[i].getdata();
    // }

    return 0;
}