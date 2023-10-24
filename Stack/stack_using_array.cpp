// #include <iostream>

// using namespace std;

// class stack
// {
// public:
//     int *arr;
//     int top;
//     int size;

//     stack(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     void push(int element)
//     {
//         if (size - top > 1)
//         {
//             top++;
//             arr[top] = element;
//         }
//         else
//         {
//             cout << "stack overflow" << endl;
//         }
//     }

//     void pop()
//     {
//         if (top >= 0)
//         {
//             top--;
//         }
//         else
//         {
//             cout << "Stack underflow" << endl;
//         }
//     }

//     int peek()
//     {
//         if (top >= 0)
//         {
//             return arr[top];
//         }
//         else
//         {
//             cout << "stack is empty " << endl;
//             return -1;
//         }
//     }
//     bool isempty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// int main()
// {
//     stack st(1);
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     cout<<st.peek()<<endl;
//     st.pop();
//     cout<<st.peek()<<endl;

//     return 0;
// }

#include <iostream>

using namespace std;

class stack
{
public:
    int top;
    int *arr;
    int size;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele)
    {
        if ((size - top) >= 1)
        {
            top++;
            arr[top] = ele;
        }
        else
        {
            cout << "Stack overflow " << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow " << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty " << endl;
            return -1;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.peek() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.peek() << endl;
    cout << st.isempty() << endl;

    return 0;
}