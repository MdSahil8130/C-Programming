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

node *reverse(node *&head, int k)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // step 1 reverse first k nodes
    node *pre = NULL;
    node *curr = head;
    node *forward;
    int cnt = 0;

    while (curr != NULL && cnt < k)
    {
        forward = curr->next;
        curr->next = pre;
        pre = curr;
        curr = forward;
        cnt++;
    }

    // step2 recursion
    if (forward != NULL)
    {
        head->next = reverse(forward, k);
    }

    // step3 return the head of the reverse linked list
    return pre;
}

int main()
{
    node *node1 = new node(3);
    node *node2 = new node(5);
    node *node3 = new node(7);
    node *node4 = new node(8);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    node *head = node1;

    print(head);
    cout << "After reversal " << endl;
    node *temp = reverse(head, 2);
    print(temp);

    return 0;
}