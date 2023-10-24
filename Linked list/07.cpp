#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void print(node *&head){
    node *ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

node* reverse1(node*&head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* temp = reverse1(head->next);
    head->next->next = head;
    head->next=NULL;
    return temp; // head of chotti list
 
}

void reverse(node*&head, node*curr, node*pre){
    if(curr=NULL){
        head =pre;
        return ;
    }

    node*forward = curr->next;
    reverse(head,forward,curr);
    curr->next =pre;
}

node* reversal(node *&head){
    node*curr = head;
    node*pre = NULL;

    reverse(head,curr, pre);
    return head;
    // node*forward;
    // while(curr!=NULL){
    //     forward = curr->next;
    //     curr->next = pre;
    //     pre = curr;
    //     curr = forward;
    // }

    // return pre;
}


// recursive method;




int main () {

    node *node1  = new node(1);
    node *node2  = new node(2);
    node *node3  = new node(3);

    node1->next = node2;
    node2->next = node3;

    node *head = node1;


    print(head);

    cout<<"AFTER REVERSAL"<<endl;

    node*temp = reverse1(head);
    print(temp);

    

    return 0;
}