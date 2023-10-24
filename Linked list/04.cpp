#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *pre;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        this->pre = NULL;
        this->next = NULL;
    }
};

int getlen(node *&head)
{
    int len = 0;
    node *ptr = head;
    while (ptr != NULL)
    {
        len++;
        ptr = ptr->next;
    }
    return len;
}
void insertathead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head->pre = temp;
    head = temp;
}

void insertattail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    temp->pre = tail;
    tail = temp;
}

void insertatpos(node *&tail, node *&head, int pos, int data)
{
    if (pos == 1)
    {
        insertathead(head, data);
        return;
    }
    node *nodetoinsert = new node(data);
    node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertattail(tail, data);
        return;
    }

    nodetoinsert->next = temp->next;
    temp->next->pre = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->pre = temp;
}

void deletion(node* &head, int pos){
    if(pos==1){
        node* ptr = head;
        ptr->next->pre = NULL;
        head = ptr->next;
        ptr->next = NULL;
        free(ptr);
    }
    else{
        
    }
}

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

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);

    insertathead(head, 2);
    print(head);

    insertattail(tail, 12);
    print(head);

    insertatpos(tail, head, 1, 100);
    print(head);

    deletion(head,1);
    print(head);

    cout << getlen(head) << endl;
    return 0;
}