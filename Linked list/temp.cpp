// // // Online C++ compiler to run C++ program online
// // #include <iostream>
// // using namespace std;

// // class node{
// //   public:
// //   int data;
// //   node *next;
// //   node(int data){
// //       this->data = data;
// //       this->next = NULL;
// //   }

// // };

// // void insertnode(node *&tail, int ele, int data){
// //     // empty list
// //     if(tail==NULL){
// //         node *newnode = new node(data);
// //         tail  = newnode ;
// //         newnode->next = newnode;
// //     }
// //     else{
// //         // in case of non empty list
// //         // assuming  the element is present
// //         node *curr = tail;
// //         while(curr->data != ele){
// //             curr= curr->next;
// //         }
// //         node *temp =  new node(data);
// //         temp->next = curr->next;
// //         curr->next = temp;
// //     }
// // }

// // void print(node* &tail){
// //     // using do while loop
// //     if(tail==NULL){
// //         cout<<"List is empty"<<endl;
// //         return;
// //     }
// //     node *temp = tail;
// //     do{
// //         cout<<tail->data<<" ";
// //         tail = tail->next ;
// //     }while(temp != tail);
// //     cout<<endl;
// // }

// // void deletion(node *&tail, int ele){
// //     if(tail==NULL){
// //         cout<<"List is empty ... "<<endl;
// //         return ;
// //     }
// //     else{
// //         node *pre = tail;
// //         node* curr = pre->next;
// //         while(curr ->data != ele){
// //             pre = curr;
// //             curr = curr->next;
// //         };

// //         // 1 node linked list;
// //         if(curr==pre){
// //             tail=NULL;
// //         }

// //         // >=2 node linked list
// //         if(tail==curr){
// //             tail = pre;
// //         }
// //         pre->next = curr->next;
// //         curr->next = NULL;
// //         // delete curr;
// //     }
// // }

// // int main() {

// //     node *tail = NULL;

// //     insertnode(tail,5,3);
// //     print(tail);

// //     deletion(tail,3);
// //     print(tail);
// //     // insertnode(tail,3,5);
// //     // print(tail);

// //     // insertnode(tail,5,7);
// //     // print(tail);

// //     // insertnode(tail,7,1);
// //     // print(tail);

// //     // deletion(tail,3);
// //     // print(tail);

// //     return 0;
// // }

// #include <iostream>

// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int data)
//     {
//         this->next = NULL;
//         this->data = data;
//     }
// };

// void insertnode(node *&tail, int ele, int data)
// {
//     if (tail == NULL)
//     {
//         node *newnode = new node(data);
//         tail = newnode;
//         newnode->next = newnode;
//     }
//     else
//     {
//         node *curr = tail;

//         while (curr->data != ele)
//         {
//             curr = curr->next;
//         }
//         node *temp = new node(data);
//         temp->next = curr->next;
//         curr->next = temp;
//     }
// }

// void deletion(node *&tail, int data)
// {
//     if (tail == NULL)
//     {
//         cout << "list is empty " << endl;
//     }
//     else
//     {
//         node *pre = tail;
//         node *curr = pre->next;
//         while (curr->data != data)
//         {
//             pre = curr;
//             curr = curr->next;
//         }
//         // 1 node linked list
//         if (curr == pre)
//         {
//             tail = NULL;
//         }

//         // >=2 node linked list
//         if (tail == curr)
//         {
//             tail = pre;
//         }

//         pre->next = curr->next;
//         curr->next = NULL;
//         free(curr);
//     }
// }

// void print(node *tail)
// {
//     if (tail == NULL)
//     {
//         cout << "list is empty !! " << endl;
//         return;
//     }
//     else
//     {
//         node *temp = tail;
//         do
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         } while (temp != tail);
//         cout << endl;
//     }
// }

// int main()
// {
//     node *tail = NULL;
//     insertnode(tail, 3, 3);
//     insertnode(tail, 3, 5);
//     insertnode(tail, 5, 7);
//     print(tail);

//     deletion(tail,7);
//     print(tail);

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
        this->next = NULL;
        this->data = data;
    }
};

int getlength(node *head)
{
    node *ptr = head;
    int cnt = 0;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        cnt++;
    }
    return cnt;
}

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

bool check(int k)
{
    int len = 8;
    while ((len - k) > k)
    {
        len = len - k;
        return true;
    }
    return false;
}

node *reverse(node *&head, int k)
{
    // // base case
    // // int len = 8;
    // if(head==NULL || head->next ==NULL ){
    //     return head;
    // }
    // if ( ((len - k+1) < k))
    // {
    //     return head;
    // }
    // else
    // {
    //     len = len - k;
    // }

    // node *pre = NULL;
    // node *curr = head;
    // node *forward = NULL;
    // int cnt = 0;
    // int len = 8;

    // if ((len - k) < k)
    // {
    //     head->next = forward;
    //     return pre;
    // }

    // while (cnt < k && curr != NULL)
    // {
    //     forward = curr->next;
    //     curr->next = pre;
    //     pre = curr;
    //     curr = forward;
    //     cnt++;
    // }

    // if (forward != NULL)
    // {
    //     head->next = reverse(forward, k);
    // }

    // return pre;
    node *cursor = head;
    for (int i = 0; i < k; i++)
    {
        if (cursor == nullptr)
        return head;
        cursor = cursor->next;
    }
    node *prev = nullptr;
    node *curr = head;
    node *nxt = nullptr;
    for (int i = 0; i < k; i++)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head->next = reverse(curr , k);
    return prev;
}

int main()
{
    node *node1 = new node(3);
    node *node2 = new node(5);
    // node *node3 = new node(7);
    // node *node4 = new node(8);
    // node *node5 = new node(9);
    // node *node6 = new node(10);
    // node *node7 = new node(12);
    // node *node8 = new node(13);

    node1->next = node2;
    // node2->next = node3;
    // node3->next = node4;
    // node4->next = node5;
    // node5->next = node6;
    // node6->next = node7;
    // node7->next = node8;

    node *head = node1;

    print(head);
    cout << "After reversal " << endl;
    int len = getlength(head);
    cout<<len<<endl;
    node *temp = reverse(head, 2);
    print(temp);

    return 0;
}