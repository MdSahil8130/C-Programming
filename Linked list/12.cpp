#include <iostream>
#include <bits/stdc++.h>

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
    // temp->next = head;
    tail->next = temp;
    tail = temp;
    return tail;
}

node *duplicates(node *head)
{
    node *curr = head;
    while (curr->next != nullptr)
    {
        if (curr->data == curr->next->data)
        {
            node *next_next = curr->next->next;
            node *nodetodelete = curr->next;
            delete (nodetodelete);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

node *removeduplicates(node *head)
{
    node *curr = head;
    node *dup;
    while (curr != nullptr && curr->next != nullptr)
    {
        node *temp = curr;
        // node *pre = curr;
        while (temp->next != nullptr)
        {

            if (curr->data == temp->next->data)
            {
                // node *next_next = temp->next;
                // pre->next = temp->next;
                dup = temp->next;
                temp->next = temp->next->next;
                delete (dup);
            }
            else
            {
                temp = temp->next;
                // pre = pre->next;
            }
        }
        curr = curr->next;
    }

    return head;
}

node *duplicate2(node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    map<node *, bool> visited;
    node *temp = head;
    node *dup;
    node *pre = nullptr;

    while (temp->next != nullptr)
    {

        visited[temp] = true;
        if (visited[temp->next] == true)
        {
            node *nodetodelete = temp->next;
            delete (nodetodelete);
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }

        // if (visited[temp] == true)
        // {
        //     dup = pre->next;
        //     pre->next = temp->next;
        //     delete (dup);
        // }
        //     visited[temp] = true;
        //     pre = temp;
        //     temp = temp->next;
    }
    return head;
}

int main()
{
    // node *node1 = new node(0);
    node *tail = nullptr;

    node *node1 = create(tail, 4);
    node *head = node1;

    node *node2 = create(tail, 2);
    node *node3 = create(tail, 5);
    node *node4 = create(tail, 4);
    node *node5 = create(tail, 2);
    node *node6 = create(tail, 2);
    print(head);
    // node *duplicate = duplicates(head);
    // node *duplicate = removeduplicates(head);
    node *duplicate = duplicate2(head);
    print(head);

    return 0;
}