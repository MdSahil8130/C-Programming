#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printvec(vector<string> v)
{
    cout << "SIZE: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // decaltion of vector
    // vector<int> v;
    int n;
    cin >> n;
    // // input of vector
    // for (int i = 0; i < n; ++i)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // printvec(v);

    // // copy of vector
    // vector<int> v2=v;
    // v2.push_back(6);
    // printvec(v2);

    vector<string> v;
    // input of string
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    printvec(v);

    return 0;
}