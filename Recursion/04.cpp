#include <iostream>

using namespace std;

void saydigit(int n, string arr[])
{
    // base case

    if (n == 0)
    {
        return;
    }

    int digit = n % 10; // n==3,2,1
    n = n / 10; // n=12,1,0
    saydigit(n, arr);
    cout << arr[digit] << " ";
}

int main()
{

    int n;
    cin >> n;
    string arr[10] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
    };

    saydigit(n, arr);

    return 0;
}