// #include <iostream>

// using namespace std;

// int main()
// {
//     string name;
//     cout << "May i know your name ";
//     // cin >> name;
//     getline(cin, name); // for more than one input  at a time
//     cout << "Welcome Mr. " << name;
// }

#include <iostream>

using namespace std;

int main()
{

    string name;
    cout << "May i know your name ";
    // cin >> name;
    getline(cin,name);
    cout << "Welcome Mr. " << name;

    return 0;
}