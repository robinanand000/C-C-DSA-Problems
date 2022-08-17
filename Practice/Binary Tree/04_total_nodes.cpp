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

int totalNodes(Node* root){
    if (root==NULL)
    {
        return 0;
    }
    int ls = totalNodes(root->left);
    int rs = totalNodes(root->right);

    return ls+rs+1;
    
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
    int n = totalNodes(root);
    cout<<"Total no. of nodes = "<<n<<endl;
    return 0;
}