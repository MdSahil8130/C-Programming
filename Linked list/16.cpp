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

node *reverse(node *head)
{
    node *pre = nullptr;
    node *curr = head;
    node *forward;
    while (curr != nullptr)
    {
        forward = curr->next;
        curr->next = pre;
        pre = curr;
        curr = forward;
    }
    return pre;
}

void insertattail(node *&head, node *&tail, int val)
{
    node *temp = new node(val);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

node *sum(node *head1, node *head2)
{
    int carry = 0;
    node *anshead = NULL;
    node *anstail = NULL;
    while (head1 != nullptr || head2 != nullptr || carry != 0)
    {
        int val1 = 0;
        if (head1 != nullptr)
            val1 = head1->data;

        int val2 = 0;
        if (head2 != nullptr)
        {
            val2 = head2->data;
        }

        int sum = carry + val1 + val2;
        int digit = sum % 10;
        insertattail(anshead, anstail, digit);
        carry = sum / 10;

        if (head1 != nullptr)
            head1 = head1->next;

        if (head2 != nullptr)
            head2 = head2->next;
    }
    return anshead;
}

int main()
{
    node *node1 = new node(4);
    node *node2 = new node(3);
    node1->next = node2;
    node *head1 = node1;
    
    cout<<"first linked list"<<endl;
    print(head1);
    node *node3 = new node(2);
    node *node4 = new node(3);
    node *node5 = new node(0);

    node3->next = node4;
    node4->next = node5;
    node *head2 = node3;
    cout<<"second linked list"<<endl;
    print(head2);

    node *a = reverse(head1);
    node *b = reverse(head2);

    // print(a);
    // print(b);

    node *ans = reverse(sum(a, b));

    cout<<"final ans after revering and performing addition"<<endl;

    print(ans);

    return 0;
}