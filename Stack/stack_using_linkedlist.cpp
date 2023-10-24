// #include <iostream>

// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// class stack
// {
// public:
//     node *top;

//     stack()
//     {
//         this->top = NULL;
//     }

//     // isempty function
//     bool isempty()
//     {
//         if (top == NULL)
//         {
//             // cout << "Stack underflow" << endl;
//             return true;
//         }
//         else
//         {
//             // cout << "Stack is not empty" << endl;
//             false;
//         }
//     }
//     void push(int data)
//     {
//         node *newnode = new node(data);
//         newnode->next = top;
//         top = newnode;
//     }

//     int pop()
//     {
//         // if (isempty())
//         // {
//         //     cout << "stack underflow" << endl;
//         // }
//         // else
//         // {
//             node *temp = top;
//             top = top->next;
//             int x = temp->data;
//             free(temp);
//             return x;
//         // }
//     }

//     int peek()
//     {
//         if (top != NULL)
//         {
//             return top->data;
//         }
//         else
//         {
//             return -1;
//         }
//     }

//     void print()
//     {
//         node *temp = top;
//         if (temp == NULL)
//         {
//             cout << "Stack underflow" << endl;
//             exit(1);
//         }
//         while (temp != NULL)
//         {
//             cout << temp->data << "->";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     stack st;
//     cout << st.isempty() << endl;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.print();

//     cout << "top element is " << st.peek() << endl;

//     cout << "popped element is " << st.pop() << endl;

//     st.print();

//     return 0;
// }

#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class stack
{
public:
    node *top;
    stack()
    {
        this->top = NULL;
    }

    bool isempty()
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int data)
    {
        node *newnode = new node(data);
        newnode->next = top;
        top = newnode;
    }

    int pop()
    {
        node *temp = top;
        top = top->next;
        int x = temp->data;
        free(temp);
        return x;
    }

    int peek()
    {
        if (top != NULL)
        {
            return top->data;
        }
        else
        {
            return -1;
        }
    }

    void print()
    {
        node *temp = top;
        if (temp == NULL)
        {
            cout << "stack underflow !!! " << endl;
            exit(1);
        }
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    stack st;
    cout<<st.isempty()<<endl;
    st.push(10);
    st.push(112);
    st.push(132);
    st.print();
    cout<<st.peek()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    return 0;
}