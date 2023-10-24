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

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *create(node *&tail, int data)
{

    if (tail == NULL)
    {

        node *temp = new node(data);
        // head = temp;
        tail = temp;
        return tail;
    }
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
    return tail;
}
node *sort1(node *head)
{
    node *temp = head;
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;
    while (temp != nullptr)
    {
        if (temp->data == 0)
            zerocount++;
        if (temp->data == 1)
            onecount++;
        if (temp->data == 2)
            twocount++;
        temp = temp->next;
    }
    temp = head;
    while (temp != nullptr)
    {
        if (zerocount != 0)
        {
            temp->data = 0;
            zerocount--;
        }
        else if (onecount != 0)
        {
            temp->data = 1;
            onecount--;
        }
        else if (twocount != 0)
        {
            temp->data = 2;
            twocount--;
        }
        temp = temp->next;
    }
    return head;
}

void insertattail(node *&tail, node *curr)
{
    tail->next = curr;
    tail = curr;
}

node *sort2(node *head)
{
    node *zerohead = new node(-1);
    node *zerotail = zerohead;
    node *onehead = new node(-1);
    node *onetail = onehead;
    node *twohead = new node(-1);
    node *twotail = twohead;

    node *curr = head;
    while (curr)
    {
        int val = curr->data;
        // CREATE  a linked list of 0s 1s and 2s;
        if (val == 0)
        {
            insertattail(zerotail, curr);
        }
        else if (val == 1)
        {
            insertattail(onetail, curr);
        }
        else if (val == 2)
        {
            insertattail(twotail, curr);
        }
        curr = curr->next;
    }

    //  merge subset linked list
    if (onehead->next != nullptr)
    {
        zerotail->next = onehead->next;
    }
    else
    {
        zerotail->next = twohead->next;
    }

    onetail->next = twohead->next;
    twotail->next = nullptr;

    // head setup;
    head = zerohead->next;

    // delete dummmy nodes
    delete zerohead;
    delete onehead;
    delete twohead;

    return head;
}

int main()
{
    node *tail = nullptr;
    node *node1 = create(tail, 1);
    node *head = node1;
    node *node2 = create(tail, 0);
    node *node3 = create(tail, 2);
    node *node4 = create(tail, 1);
    node *node5 = create(tail, 2);
    print(head);

    // node *sort_1 = sort1(head);
    // print(sort_1);

    node *sort_2 = sort2(head);
    print(sort_2);

    return 0;
}