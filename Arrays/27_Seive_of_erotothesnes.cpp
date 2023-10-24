#include <iostream>
#include <vector>
using namespace std;

int sieveprime(int n)
{
    int cnt = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = 0;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            cnt++;
            for (int j = i * i; j < n; j += i)
            {
                prime[j] = 0;
            }
            cout << i << " ";
        }
    }

    return cnt;
}

int main()
{
    
    int n;
    cin >> n;


    int ans = sieveprime(n);

    cout<<endl;

    cout<<"no. of prime numbers less than "<<n<<" is "<<ans;

    return 0;
}