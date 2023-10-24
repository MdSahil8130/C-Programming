#include <iostream>

int setbits(int a)
{
    int count = 0;
    int i = 0;
    
    while (a != 0)
    {

        // int bit = a & 1;
        // a = a >> 1;

        // if (bit == 1)
        // {
        //     count++;
        // }
        // a=a>>1;

        if (a&1)
        {
            count++;
        }
            a=a>>1;
        i++;
    }

    return count;
}

using namespace std;

int main()
{
    int a;
    cin >> a;

    cout << "total no of setbits are " << setbits(a) << endl;

    return 0;
}