#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
node *search_node(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (key == root->data)
    {
        return root;
    }
    if (key < root->data)
    {
        return search_node(root->left, key);
    }
    else
    {
        return search_node(root->right, key);
    }
}
void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
node *inorder_predecessor(node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
node *delete_node(node *root, int key)
{
    node *ipre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    if (key < root->data)
    {
        root->left = delete_node(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = delete_node(root->right, key);
    }
    else
    {
        ipre = inorder_predecessor(root);
        root->data = ipre->data;
        root->left = delete_node(root->left, ipre->data);
    }
    return root;
}
int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);

    // if (search_node(root, 5) == NULL)
    // {
    //     cout << "Key doesn't exist.";
    // }
    // else
    // {
    //     cout << "Key exist.";
    // }
    inOrder(root);
    delete_node(root, 3);
    cout << endl;
    inOrder(root);

    return 0;
}