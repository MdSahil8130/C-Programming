// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// void insertAtbottom(stack<int> &st, int x)
// {
//     if (st.empty())
//     {
//         st.push(x);
//         return;
//     }

//     int top = st.top();
//     st.pop();

//     insertAtbottom(st, x);
//     st.push(top);
// }

// void reverse(stack<int> &st)
// {
//     if (st.empty())
//     {
//         return;
//     }
//     int top = st.top();
//     st.pop();

//     reverse(st);

//     insertAtbottom(st, top);
// }

// void print(stack<int> &st)
// {
//     if (st.empty())
//     {
//         return;
//     }
//     int top = st.top();
//     st.pop();
//     print(st);
//     cout << top << " ";
// }

// int main()
// {
//     stack<int> st1, st2;
//     for (int i = 1; i <= 4; i++)
//     {
//         st1.push(i);
//     }

//     st2 = st1;

//     print(st2);
//     cout << endl;

//     reverse(st1);

//     print(st1);

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertAtbottom(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int top = st.top();
    st.pop();
    insertAtbottom(st, x);
    st.push(top);
}

void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int top = st.top();
    st.pop();
    reverse(st);
    insertAtbottom(st, top);
}

void print(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int top = st.top();
    st.pop();
    print(st);
    cout << top << " ";
}



int main()
{

    stack<int> st1, st2;

    for (int i = 1; i <= 4; i++)
    {
        st1.push(i);
    }
    st2 = st1;
    print(st2);

    reverse(st1);
    cout<<endl;
    print(st1);

    return 0;
}