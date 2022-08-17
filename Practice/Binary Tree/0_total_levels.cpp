#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int totalLevels(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    int lvl = 0;
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        if (node != NULL)
        {
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            lvl++;
        }
    }
    return lvl+1;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    int l = totalLevels(root);
    cout<<"Total Levels = "<<l;
    return 0;
}