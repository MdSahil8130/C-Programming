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

node *solve(node *first, node *second)
{

    // if only one element is present
    if (first->next == nullptr)
    {
        first->next = second;
        return first;
    }

    node *curr1 = first;
    node *next1 = curr1->next;
    node *curr2 = second;
    node *next2 = curr2->next;

    while (next1 != nullptr && curr2 != nullptr)
    {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data))
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            // updatae pointer
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = next1;
            next1 = next1->next;

            if (next1 == nullptr)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

node *sort_two_list(node *first, node *second)
{
    if (first == nullptr)
    {
        return second;
    }
    if (second == nullptr)
    {
        return first;
    }

    if (first->data <= second->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}

int main()
{
    node *node1 = new node(1);
    node *node2 = new node(3);
    node *node3 = new node(5);

    node1->next = node2;
    node2->next = node3;
    node *head1 = node1;

    node *node_1 = new node(2);
    node *node_2 = new node(4);
    node *node_3 = new node(5);
    node_1->next = node_2;
    node_2->next = node_3;
    node *head2 = node_1;
    print(head1);
    print(head2);

    cout << "linked list after merging " << endl;
    node *ans = sort_two_list(head1, head2);
    print(ans);

    return 0;
}