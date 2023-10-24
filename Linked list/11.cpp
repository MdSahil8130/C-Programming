#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->next = NULL;
        this->data = data;
    }
};

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

node *reversebetween(node *&head, int left, int right)
{
    if (head == NULL || head->next == NULL || head->next->next == NULL)
    {
        return head;
    }
    node *curr = head;
    node *pre = NULL;
    node *forward;

    // traversing through left node
    while (left > 1)
    {
        pre = curr;
        curr = curr->next;
        left--;
        right--;
    }
    // cout<<"HELLo"<<endl;

    node *con = pre;
    node *tail = curr;

    while (right > 0)
    {
        forward = curr->next;
        curr->next = pre;
        pre = curr;
        curr = forward;
        right--;
    }

    if (con != NULL)
    {
        con->next = pre;
    }
    else
    {
        head = pre;
    }

    tail->next = curr;

    return head;
}

int main()
{

    node *node1 = new node(1);
    node *node2 = new node(2);
    // node *node3  = new node(3);
    // node *node4  = new node(4);
    // node *node5  = new node(5);

    node1->next = node2;
    // node2->next = node3;
    // node3->next = node4;
    // node4->next = node5;

    node *head = node1;

    print(head);

    node *temp = reversebetween(head, 2, 4);
    cout << "After reversal " << endl;
    print(temp);

    return 0;
}