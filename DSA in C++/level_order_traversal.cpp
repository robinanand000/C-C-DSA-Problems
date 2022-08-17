#include <iostream>
#include <queue>
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

void level_order_traversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *f = q.front();
        q.pop();
        if (f != NULL)
        {
            cout << f->data << " ";
            if (f->left != NULL)
            {
                q.push(f->left);
            }
            if (f->right != NULL)
            {
                q.push(f->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    level_order_traversal(root);
    return 0;
}