#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }
    int top = st.top();
    st.pop();

    solve(st, x);
    st.push(top);
}

void print(stack<int> &st)
{
    if (st.empty())
        return;

    int top = st.top();
    st.pop();
    print(st);

    cout << top << " ";
    st.push(top);
}

int main()
{
    stack<int> st;
    st.push(3);
    st.push(7);
    st.push(1);
    st.push(2);
    st.push(5);

    print(st);
    cout<<endl;
    solve(st,9);
    print(st);

    return 0;
}