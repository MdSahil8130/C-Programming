// // factorial of a number  using a constructor

// #include <iostream>

// using namespace std;

// class factorial
// {
//     long long int fact = 1;

// public:
//     factorial(int n); // fucntion declaration
//     void print(void)
//     {
//         cout << "The factorial of number is : " << fact << endl;
//     }
// };

// factorial ::factorial(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     cout << "HELLO" << endl;
//     ;
// }

// int main()
// {
//     factorial fact(5);
//     fact.print();

//     return 0;
// }

#include <iostream>

using namespace std;

class sum
{
    int add = 0;

public:
    sum(int n); // constructor function declaration
    void print(void)
    {
        cout << "The sum is : " << add << endl;
    }
};

sum::sum(int n)
{
    for (int i = 0; i <= n; i++)
    {
        add += i;
    }
}

int main()
{
    sum obj1(5);
    obj1.print();
    
    return 0;
}