#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    char op;
    cout << "input a opearattor ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;

    case '-':
        cout << a - b << endl;
        break;

    case '*':
        cout << a * b << endl;
        break;

    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "inavlid operator is used ";
    }

    return 0;
}