#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(stack<int>& st, int count, int size)
{
    // base case
    if (count == (size / 2))
    {
        st.pop();
        return;
    }

    int num = st.top();
    st.pop();
    count = count + 1;
    // recursive call
    solve(st, count, size);
    st.push(num);
}

void print(stack<int>& st)
{
    if (st.empty())
        return;

    int x = st.top();
    st.pop();
    cout << x << " ";
    print(st);
    st.push(x);
}

int main()
{
    stack<int> st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    print(st);

    int count = 0;
    solve(st, count, n);
    cout << endl;

    cout<<"after deletion"<<endl;
    // print(st);
    while (!st.empty())
    {
        int x = st.top();
        st.pop();
        cout << x << " ";
    }

    return 0;
}