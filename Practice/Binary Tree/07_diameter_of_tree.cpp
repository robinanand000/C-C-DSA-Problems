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

int height(Node* root){
    if (root==NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh,rh)+1;  
}

int diameter(Node* root){
    if(root==NULL){
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    int curr_dia = lh+rh+1;    //for case 1:

    int ld = diameter(root->left);    //for case 2:
    int rd = diameter(root->right);

    return max(curr_dia,max(ld,rd)); 
}
int optimized_diameter(Node* root,int *height){
    int lh=0;
    int rh=0;
    int ldia = optimized_diameter(root->left,&lh);
    int rdia = optimized_diameter(root->right,&rh);
    int curr_d = lh+rh+1;
    *height = max(lh,rh)+1;

    return max(curr_d,max(ldia,rdia));
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
    // int d = diameter(root);
    int height=0;
    int d = optimized_diameter(root,&height);
    cout<<"Diameter = "<<d<<endl;
    return 0;
}