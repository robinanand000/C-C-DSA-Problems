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
int sum = 0;
int sumOfAllNodes(Node *root)
{
    if(root==NULL){
        return 0;
    }
    int ls = sumOfAllNodes(root->left);
    int rs = sumOfAllNodes(root->right);

    return root->data+ls+rs;
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
    int s = sumOfAllNodes(root);
    cout << "Sum of all nodes = " << s << endl;
    return 0;
}