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
    int size;
    node *head;
    // constructor
    stack()
    {
        this->head = NULL;
        //   this->size =size;
    }
    bool isempty()
    {
        if (head == NULL)
        {
            // cout<<"Stack underflow or it is empty"<<endl;
            return true;
        }
        else
        {
            // cout<<"Stack is not empty"<<endl;
            return false;
        }
    }
    void push(int data)
    {
        node *newnode = new node(data);
        newnode->next = head;
        head = newnode;
    }

    int pop()
    {
        if (isempty())
        {
            cout << "stack underflow" << endl;
        }
        else
        {
            node *temp = head;
            head = head->next;
            int x = temp->data;
            free(temp);
            return x;
        }
    }

    int peek()
    {
        if (head != NULL)
        {
            return head->data;
        }
        else
        {
            return -1;
        }
    }
    void print()
    {
        node *temp = head;
        if (temp == NULL)
        {
            cout << "stack underflow" << endl;
            exit(1);
        }
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << endl;
    }
};

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    // node*node1 = new node(10);
    // node*head = node1;
    // node*node2 = new node(20);
    // node1->next = node2;
    // print(head);

    stack st;
    // st.print();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.print();
    cout << "popped element is " << st.pop() << endl;
    st.print();
    st.isempty();
    cout << st.peek() << endl;

    return 0;
}