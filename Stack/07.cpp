// #include <iostream>
// // #include <bits/stdc++.h>
// #include<stack>
// #include<vector>

// using namespace std;

// void sortedInsert(stack<int> &st, int num)
// {
//     if (st.empty() || (st.top() < num))
//     {
//         st.push(num);
//         return;
//     }

//     int top = st.top();
//     st.pop();
//     sortedInsert(st, top);
//     st.push(top);
// }

// void sort(stack<int> &st)
// {
//     if (st.empty())
//         return;

//     int num = st.top();
//     st.pop();
//     sort(st);

//     sortedInsert(st, num);
// }

// void print(stack<int> &st)
// {
//     if (st.empty())
//         return;

//     int top = st.top();
//     st.pop();
//     print(st);
//     cout << top << " ";
// }

// int main()
// {
//     stack<int> st, st2;
//     st.push(-2);
//     st.push(5);
//     st.push(2);
//     st.push(3);
//     st.push(-9);

//     st2 = st;

//     // vector<int> list = {5,-2,9,-7,3};
//     // stack<int>st3;
//     // for(auto i:list){
//     //     st3.push(i);
//     // }

//     cout<<"stack before sorting"<<endl;
//     print(st2);

//     sort(st);
//     cout << endl;
//     cout<<"Stack after sorting"<<endl;
//     print(st);

//     return 0;

#include <iostream>
#include <stack>

using namespace std;

void sortedInsert(stack<int> &st, int num)
{
    if (st.empty() || st.top() < num)
    {
        st.push(num);
        return;
    }

    int top = st.top();
    st.pop();

    sortedInsert(st, num);

    st.push(top);
    
}

void sort(stack<int> &st)
{
    if (st.empty())
        return;

    int top = st.top();
    st.pop();

    sort(st);

    sortedInsert(st, top);
}

void print(stack<int> st){
    if(st.empty())
    return;

    int top = st.top();
    st.pop();

    print(st);
    cout<<top<<" ";
}

int main()
{

    stack<int> st, st2;

    for (int i = 5; i > 0; i--)
    {
        st.push(i);
    }

    // cout<<st.top()<<endl;

    print(st);

    sort(st);

    cout<<endl;

    print(st);

    return 0;

}

