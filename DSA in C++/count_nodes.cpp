#include <iostream>
#include <algorithm>
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
int count_nodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return count_nodes(root->left) + count_nodes(root->right) + 1;
}
int sum_of_nodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return sum_of_nodes(root->left) + sum_of_nodes(root->right) + root->data;
}
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left_height = height(root->left);
    int right_height = height(root->right);                     //time complexity= O(n^2);
    int curr_dia = left_height + right_height + 1;

    int Ldia = diameter(root->left);
    int Rdia = diameter(root->right);
    return max(curr_dia, max(Ldia, Rdia));
}
int opt_dia(node* root){
 
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

    // cout << count_nodes(root);
    // cout << sum_of_nodes(root);
    // cout << height(root);
    cout << diameter(root);
    return 0;
}