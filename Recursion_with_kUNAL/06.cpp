#include <iostream>

using namespace std;

void palindrome(int n, int val)
{
    if (val == n)
    {
        cout << "its a pallindrome" << endl;
    }
    else
    {
        cout << "its not a palindrome" << endl;
    }
}

void reverse(int n, int num, int pal)
{

    if (n == 0)
    {
        cout << num << endl;

        // if (pal == num)
        // {
        //     cout << "its a pallindrome" << endl;
        // }
        // else
        // {
        //     cout << "its not a palindrome" << endl;
        // }
        palindrome(num,pal);

        return;
    }

    int digit = n % 10;
    n = n / 10;

    num = num * 10 + digit;

    reverse(n, num, pal);
}

int main()
{

    int n;
    cin >> n;
    int num = 0;

    int pal = n;

    reverse(n, num, pal);

    return 0;
}