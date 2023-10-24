#include <iostream>
#include <queue>

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

node *insertIntoBst(node *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = insertIntoBst(root->right, d);
    }
    else
    {
        root->left = insertIntoBst(root->left, d);
    }
}

void takeinput(node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBst(root, data);
        cin >> data;
    }
}

node *minVal(node *root)
{
    node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
node *maxVal(node *root)
{
    node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

node *deleteFromBst(node *&root, int val)
{
    // base case
    if (root == NULL)
        return root;

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child

        // left child
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root != NULL && root->right != NULL)
        {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBst(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deleteFromBst(root->left, val);
        return root;
    }
    else
    {
        root->right = deleteFromBst(root->right, val);
        return root;
    }
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child ndoes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{

    node *root = NULL;
    cout << "Enter the data for BST" << endl;

    takeinput(root);

    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);

    cout << "Minimum value in bst " << minVal(root)->data << endl;
    cout << "Maximum value in bst " << maxVal(root)->data << endl;

    // deletion
    root = deleteFromBst(root, 20);
    cout << "Printing the BST after deletion" << endl;
    levelOrderTraversal(root);

    cout << "Minimum value in bst " << minVal(root)->data << endl;
    cout << "Maximum value in bst " << maxVal(root)->data << endl; 

    return 0;
}