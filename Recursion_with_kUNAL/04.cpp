// #include <iostream>

// using namespace std;

// long long fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     return n * fact(n - 1);
// }

// int main()
// {
//     long long  n;
//     cin >> n;

//     cout << fact(n) << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

int sum(int n)
{
    if (n < 1)
    {
        return 0;
    }

    return n + sum(n-1);

}

int main()
{

    int n;
    cin>>n;

    cout<<sum(n)<<endl;

    return 0;
}