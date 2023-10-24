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

class queue
{
public:
    node *front;
    node *back;

    queue()
    {
        this->front = NULL;
        this->back = NULL;
    }

    void push(int data)
    {
        node *temp = new node(data);
        if (front == NULL)
        {
            back = temp;
            front = temp;
        }
        back->next = temp;
        back = temp;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue underflow" << endl;
            return;
        }
        node *temp = front;
        front = front->next;
        free(temp);
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "Queue underflow" << endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
};

int main()
{   
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;

    return 0;
}