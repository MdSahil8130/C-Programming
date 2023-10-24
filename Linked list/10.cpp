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

void insertnode(node *&tail, int ele, int data)
{
    // empty list;
    if (tail == NULL)
    {
        node *newnode = new node(data);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        node *curr = tail;

        while (curr->data != ele)
        {
            curr = curr->next;
        }
        // for insertion at the front in circular linked list

        if (curr == tail)
        {
            node *temp = new node(data);
            while (curr->next != tail)
            {
                curr = curr->next;
            }
            temp->next = curr->next;
            curr->next = temp;
            cout << "Insertion at front" << endl;
            tail = temp;
            return;
        }

        node *temp = new node(data);
        temp->next = curr->next;
        curr->next = temp;
        // tail =temp;
    }
}
void deletion(node *&tail, int data)
{
    if (tail == NULL)
    {
        cout << "LIST is empty .. " << endl;
    }
    else
    {
        node *pre = tail;
        node *curr = pre->next;
        while (curr->data != data)
        {
            pre = curr;
            curr = curr->next;
        };

        // 1 node linked list
        if (curr == pre)
        {
            tail = NULL;
        }

        // >2 node linked list
        else if (tail == curr)
        {
            tail = pre;
        }

        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(node *&tail)
{
    if (tail == NULL)
    {
        cout << "LIST is empty" << endl;
        return;
    }
    node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (temp != tail);
    cout << endl;
}

bool iscircular(node *&head)
{
    if (head == NULL)
    {
        return true;
    }

    node *temp = head;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }
    return false;
}

int main()
{
    node *tail = NULL;
    cout << "HELLO" << endl;
    print(tail);
    cout << "HELLO" << endl;

    insertnode(tail, 3, 3);
    print(tail);

    insertnode(tail, 3, 2);
    print(tail);

    insertnode(tail, 2, 1);
    print(tail);

    insertnode(tail, 3, 4);
    print(tail);

    cout << tail->data << endl;
    // insertnode(tail, 3, 5);
    // print(tail);

    // insertnode(tail, 3, 4);
    // print(tail);

    // deletion(tail, 3);
    // print(tail);

    if (iscircular(tail))
    {
        cout << "linked list is circular" << endl;
    }
    else
    {
        cout << "ll is not circular" << endl;
    }

    return 0;
}