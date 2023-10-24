#include <iostream>

using namespace std;

int steps(int num, int step)
{
    if (num == 0)
    {
        return step;
    }

    if (num % 2 == 0)
    {
        num = num / 2;
         steps(num, ++step);
    }
    else
    {
        num = num - 1;
         steps(num, ++step);
    }
}

int main()
{

    int n;
    cin >> n;
    int step = 0;
    // cout << steps(n, step) << endl;
    cout<<"No. of steps to reduced "<<n<<" to zero is "<<steps(n,step)<<endl;

    return 0;
}