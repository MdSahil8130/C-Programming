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

// void print(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// node *reverslinklist(node *&head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     else
//     {
//         node *pre = NULL;
//         node *curr = head;
//         node *forward = NULL;
//         while (curr != NULL)
//         {
//             forward = curr->next;
//             curr->next = pre;
//             pre = curr;
//             curr = forward;
//         }
//         head = pre;
//         return head;
//     }
// }

// int main()
// {
//     // node *head = NULL;
//     node *node1 = new node(1);
//     node *node2 = new node(2);
//     node *node3 = new node(3);
//     node1->next = node2;
//     node2->next = node3;
//     node *head = node1;

//     print(head);

//     cout << "after reversal " << endl;

//     reverslinklist(head);

//     // node *pre = NULL;
//     // node *curr = head;
//     // node *forward = NULL;
//     // while (curr != NULL)
//     // {
//     //     forward = curr->next;
//     //     curr->next = pre;
//     //     pre = curr;
//     //     curr = forward;
//     // }
//     // head = pre;

//     print(head);

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

void print(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

node *reversal(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *pre = NULL;
    node *curr = head;
    node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = pre;
        pre = curr;
        curr = forward;
    }
    head = pre;
    return head;
}

int main()
{
    node *node1 = new node(1);
    node *node2 = new node(2);
    node *node3 = new node(3);
    node1->next = node2;
    node2->next = node3;
    node *head = node1;

    print(head);

    reversal(head);
    print(head);

    return 0;
}