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
int getlen(node* &head){
    int len = 0;
    node *temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    cout<<endl;
    return len;

}
void insertathead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertattail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void insertatpos(node *&tail, node *&head, int pos, int data)
{
    if (pos == 1)
    {
        insertathead(head, data);
        return;
    }

    node *ptr = head;
    node *nodetoinsert = new node(data);
    int count = 1;

    // first traverse upto n-1 th node
    while (count < pos - 1)
    {
        ptr = ptr->next;
        count++;
    }
    // inserting at last position

    if (ptr->next == NULL)
    {
        insertattail(tail, data);
        return;
    }

    nodetoinsert->next = ptr->next;
    ptr->next = nodetoinsert;
}

void deletefirstnode(node *&head)
{
    node *ptr = head;
    head = head->next;
    free(ptr);
}

void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        node *ptr = head;
        head = head->next;
        free(ptr);
        return;
    }
    node *curr = head;
    node *pre = NULL;
    int cnt = 1;
    while (cnt < pos)
    {
        pre = curr;
        curr = curr->next;
        cnt++;
    }
    pre->next = curr->next;
    curr->next = NULL;
    delete curr;
}

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

int main()
{
    // created a new node
    node *node1 = new node(2);
    node *node2 = new node(3);
    // manually assigning  next pointer to node2
    node1->next = node2;

    node *head = node1;
    node *tail = node2;
    // insertion at head
    insertathead(head, 1);
    print(head);
    // insertion at tail
    insertattail(tail, 4);
    print(head);
    // insertion in between
    insertatpos(tail, head, 5, 5);
    print(head);
    cout << "after deltion : " << endl;
    deletion(head, 1);
    // deletefirstnode(head);
    print(head);

    cout<<getlen(head)<<endl;

    return 0;
}