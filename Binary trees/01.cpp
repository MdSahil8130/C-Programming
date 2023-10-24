// #include <iostream>

// using namespace std;

// class node
// {
// public:
//     int data;
//     node *right;
//     node *left;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// node *buildtree(node *root)
// {
//     int data;
//     cout << "Enter data : " << endl;
//     cin >> data;
//     root = new node(data);

//     if (data == -1)
//     {
//         return NULL;
//     }

//     cout << "Enter the data in left of " << data << endl;
//     root->left = buildtree(root->left);
//     cout << "Enter the data in right of " << data << endl;
//     root->right = buildtree(root->right);

//     return root;
// }

// void inorder(node *root)
// {
//     // base case
//     if (root == NULL)
//     {
//         return;
//     }

//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void preorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void postorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// int main()
// {
//     // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//     node *root = NULL;
//     // creating a tree
//     root = buildtree(root);

//     cout << "inorder traversal : " << endl;
//     inorder(root);
//     cout << endl;

//     cout << "preorder traversal : " << endl;
//     preorder(root);
//     cout << endl;

//     cout<<" postorder traversal : "<<endl;
//     postorder(root);

//     return 0;
// }

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
    int data;
    cout << "Enter data : " << endl;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data in left : " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter the data in right : " << data << endl;
    root->right = buildtree(root->right);
    return root;
}

void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    node *root = NULL;
    // 20 10 5 -1 -1 15 13 -1 -1 -1 35 30 -1 -1 42 -1 -1
    root = buildtree(root);

    cout<<"inorder traversal : "<<endl;
    inorder(root);

    cout<<endl<<"preorder traversal : "<<endl;
    preorder(root);

    return 0;
}