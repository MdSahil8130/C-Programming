// #include <iostream>

// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int data ){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void print(node * &head)
// {
//     node * ptr = head;
//     while (ptr != NULL)
//     {
//         cout << ptr->data << endl;
//         ptr = ptr->next;
//     }
//     cout<<endl;
// }

// // void insertion(node*head ,  int data){
// //     node*temp = new node();
// //     temp->data = 12;
// //     temp ->next  =  head;
// //     head = temp;
// // }

// int main()
// {
//     // node *head = new node(10);
//     node *node1 = new node(12);
//     node *node2 = new node(14);

//     node *head = node1;

//     // head->data = 0;
//     // head->next = node1;
//     // node1->data = 1;
//     // node1->next = node2;

//     // node2->data = 2;
//     // node2->next = NULL;

//     print(head);

//     // node *temp = new node();

//     // print(head);
//     // insertion(temp,12);
//     // print(head);

//     return 0;
// }

// #include <iostream>

// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
// };

// void print(node * head)
// {
//     node* ptr = head ;
//     while (ptr != NULL)
//     {
//         cout << ptr->data << endl;
//         ptr = ptr->next;
//     }
// }

// void insert(node* &head, int data)
// {
//     node *temp = new node();
//     temp->data = data;
//     temp->next = head;
//     head = temp;
// }

// int main()
// {

//     // alllocating memory for the given three nodes
//     // node *head = new node();
//     node *first = new node();
//     node *second = new node();

//     // head->data = 1;
//     // head->next = first;

//     first->data = 2;
//     first->next = second;

//     second->data = 3;
//     second->next = NULL;

//     node * head = first;

//     print(head);

//     cout << endl;

//     insert(head, 10);

//     print(head);

//     return 0;
// }

#include <iostream>
#include <map>

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

// node *insert(node *head)
// {
//     node *temp = new node(12);
//     temp->next = head;
//     head = temp;
//     return head;
// }

bool detect(node *&head)
{
    if (head == NULL)
    {
        return false;
    }
    map<node *, bool> visited;
    node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "present on element " << temp->data << endl;
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

node *floydcycle(node *head)
{
    node *slow = head;
    node *fast = head;

    while (slow != NULL && fast != nullptr)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            // cout << "present on element " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

node *startingnode(node *head)
{
    if (head == NULL)
    {
        return nullptr;
    }

    node *intersection = floydcycle(head);
    node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeloop(node *head)
{
    if (head == nullptr)
    {
        return;
    }

    node *startloop = startingnode(head);
    node *temp = startloop;
    while (temp->next != startloop)
    {
        temp = temp->next;
    }
    temp->next = nullptr;
}

int main()
{
    // created a new node
    node *node1 = new node(1);
    node *node2 = new node(2);

    node1->next = node2;
    // node2->next = NULL;
    // head pointed to node1
    node *head = node1;

    // tail pointed to node1
    node *tail = node2;

    cout << "before insertion : " << endl;
    // print(head);
    insertattail(tail, 12);
    insertattail(tail, 11);
    cout << "after insertion : " << endl;
    // print(head);

    cout << head->data << " " << tail->data << endl;
    // head = insert(head);

    tail->next = head->next;
    // if (detect(head))
    // {
    //     cout << "cycle is present " << endl;
    // }
    // else
    // {
    //     cout << "not present" << endl;
    // }

    if (floydcycle(head))
    {
        cout << "cycle is present " << endl;
    }
    else
    {
        cout << "not present" << endl;
    }

    node *start = startingnode(head);
    cout << start->data << endl;


    removeloop(head);
    print(head);

    return 0;
}