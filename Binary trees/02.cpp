// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d)
    {
        this->data = d;
        this->left=nullptr;
        this->right=nullptr;
    }
    
};

node* buildTree(node*root)
{
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    if(data==-1)
    {
        return nullptr;
    }
    root = new node(data);
    cout<<"Enter the data for inserting in the left of "<<data<<endl;
    root->left =   buildTree(root->left);
    cout<<"Enter the data for inserting in the right of "<<data<<endl;
    root->right =   buildTree(root->right);
    
    return root;
    
}

void levelOrderTraversal(node*root){
    queue<node*> q;
    q.push(root);
    q.push(nullptr);
    
    while(!q.empty())
    {
        node*temp = q.front();
        q.pop();
        
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        
        if(temp->right)
        {
            q.push(temp->right);
        }
        }

    }
}

void inorder(node*root)
{
    if(root==nullptr)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main() {
    
    node* root=nullptr;
    root = buildTree(root);
    // 1 3
    
    levelOrderTraversal(root);
    cout<<"inorder traversal ";
    inorder(root);

    return 0;
}