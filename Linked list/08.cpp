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

node *getmiddle(node *head)
{
    node *fast = head->next;
    node *slow = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

int getlength(node *&head)
{
    node *ptr = head;
    int cnt = 0;
    while (ptr != NULL)
    {
        cnt++;
        ptr = ptr->next;
    }
    return cnt;
}

void print(node *&head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{

    node *node1 = new node(11);
    node *node2 = new node(12);
    node *node3 = new node(13);
    node *node4 = new node(14);
    node *node5 = new node(15);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    node *head = node1;

    print(head);

    // int len = getlength(head);
    // int mid = (len / 2);
    // node *temp = head;
    // int cnt = 0;
    // while (cnt < mid)
    // {
    //     temp = temp->next;
    //     cnt++;
    // }
    // cout << temp->data << endl;

    node *temp = getmiddle(head);
    cout << temp->data << endl;

    return 0;
}