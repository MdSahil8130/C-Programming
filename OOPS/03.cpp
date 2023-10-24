// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
#include <iostream>
#include <string.h>
using namespace std;

class binary
{
    string s;

public:
    int n;
    void read(void); // function declaration
    void chk_bin(void);
    void onescmp(void);
    void display(void);
};
void binary ::read()
{
    cout << "Enter Binary number" << endl;
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}

void binary :: onescmp(){
    for( int i = 0 ;i<s.length();i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    cout << "Displaying your binary number after one's compliment  " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary n ;
    n.read();
    n.chk_bin();
    n.onescmp();
    n.display();
    return 0;
}