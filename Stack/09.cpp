#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findMin(string s)
{

    if (s.length() % 2 == 1)
    {
        return -1;
    }

    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '{')
        {
            st.push(ch);
        }
        else
        {
            // ch is closed brace
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }
    // now stack conatins invalid expression

    int a = 0;
    int b = 0;
    while (!st.empty())
    {
        if (st.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        st.pop();
    }

    int ans = (a+1)/2  + (b+1)/2;
    return ans;
}

int main()
{
    string s;
    cin >> s;

    cout<<findMin(s)<<endl;

    return 0;
}