#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            // cha ya toh ) ya fir lowercase letter
            if (ch == ')')
            {
                bool isRedundant = true;

                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '(' || top == '+' || top == '-' || top == '/')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }
                if (isRedundant == true)
                    return true;
                st.pop();
            }
        }
    }
    return false;
}

void print(stack<int> &st)
{
    if (st.empty())
        return;

    int top = st.top();
    st.pop();
    print(st);
    cout << top << " ";
}

int main()
{

    string s;
    cin >> s;

    cout<<isValid(s)<<endl;

    return 0;
}