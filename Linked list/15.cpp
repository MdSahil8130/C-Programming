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

bool checkPalindrome(vector<int> arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return false;
        }
        s++;
        e--;
    }

    return true;
}

bool isPalindrome(node *head)
{
    vector<int> arr;
    node *temp = head;
    while (temp != nullptr)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkPalindrome(arr);
}

node *findmiddle(node *head)
{
    node *slow = head;
    node *fast = head->next;
    // while ( fast!=nullptr && fast->next != nullptr)
    // {
    //     fast = fast->next->next;
    //     slow = slow->next;
    // }

    while (fast != nullptr && fast->next!=nullptr)
    {
        fast = fast->next;
        if (fast != nullptr)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }

    return slow;
}

node *reverse(node *head)
{
    node *curr = head;
    node *pre = nullptr;
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

int main()
{

    node *node1 = new node(1);
    node *node2 = new node(2);
    node *node3 = new node(1);
    node *node4 = new node(2);
    // node *node5 = new node(2);
    // node *node6 = new node(1);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    // node4->next = node5;
    // node5->next = node6;
    node *head = node1;

    print(head);
    // if (isPalindrome(head))
    // {
    //     cout << "palindrome" << endl;
    // }
    // else
    // {
    //     cout << "not a palindrome" << endl;
    // }

    node *mid = findmiddle(head);
    cout << mid->data << endl;

    node *temp = mid->next;
    mid->next = reverse(temp);

    // compare both halves
    node *head1 = head;
    node *head2 = mid->next;

    while (head2 != nullptr)
    {
        if (head2->data != head1->data)
        {
            cout << "not a palindrome";
            return 0;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // again reversing the link list
    temp = mid->next;
    mid->next = reverse(temp);

    cout << "palindrome" << endl;

    return 0;
}