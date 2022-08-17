#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int num)
{
    int pos = 0;
    int size = 5;
    while (pos != size - 1)
    {
        if (inorder[pos] == num)
        {
            return pos;
        }
        pos++;
    }
}
void traversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    traversal(root->left);
    cout << root->data;
    traversal(root->right);
}
struct node *build_tree(int preorder[], int inorder[], int st, int end)
{
    static int ind = 0;
    if (st > end)
    {
        return NULL;
    }

    int curr = preorder[ind];
    ind++;

    node *nd = new node(curr);
    if (st == end)
    {
        return nd;
    }
    int pos = search(inorder, curr);
    nd->left = build_tree(preorder, inorder, st, pos - 1);
    nd->right = build_tree(preorder, inorder, pos + 1, end);
    return nd;
}
int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    node *root = build_tree(preorder, inorder, 0, 4);
    traversal(root);

    return 0;
}