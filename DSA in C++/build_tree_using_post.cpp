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
int search(int inorder[], int num)
{
    for (int i = 4; i >= 0; i--)
    {
        if (inorder[i] == num)
        {
            return i;
        }
    }
}
void traversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    traversal(root->left);
    cout << root->data << " ";
    traversal(root->right);
}
node *build_tree(int post[], int inorder[], int st, int end)
{
    static int ind = 4;
    if (st > end)
    {
        return NULL;
    }

    int curr = post[ind];
    ind--;
    node *root = new node(curr);
    if (st == end)
    {
        return root;
    }

    int pos = search(inorder, curr);
    root->right = build_tree(post, inorder, pos + 1, end);
    root->left = build_tree(post, inorder, st, pos - 1);
    return root;
}
int main()
{
    int post[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    node *root = build_tree(post, inorder, 0, 4);
    traversal(root);
    return 0;
}