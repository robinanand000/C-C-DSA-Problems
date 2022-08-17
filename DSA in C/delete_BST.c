#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
struct node *inorder_prec(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *search_BST(struct node *root, int element)
{
    if (root != NULL)
    {
        if (element == root->data)
        {
            return root;
        }
        else if (element < root->data)
        {
            search_BST(root->left, element);
        }
        else if (element > root->data)
        {
            search_BST(root->right, element);
        }
        else
        {
            return 0;
        }
    }
}

// struct node* delete2(struct node* root, int element) {
//     struct node* ipre;
//     ipre = inorder_prec(root);
//     root = search_BST(root, element);                    not working...
//     root->data = ipre->data;
//     free(ipre);
//     return root;
// }
struct node *delete (struct node *root, int element)
{

    struct node *ipre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    if (element < root->data)
    {
        root->left = delete (root->left, element);
    }
    else if (element > root->data)
    {
        root->right = delete (root->right, element);
    }
    else
    {
        ipre = inorder_prec(root);
        root->data = ipre->data;
        root->left = delete (root->left, ipre->data);
    }
    return root;
}
int main()
{

    struct node *p = create_node(5);
    struct node *p1 = create_node(3);
    struct node *p2 = create_node(6);
    struct node *p3 = create_node(2);
    struct node *p4 = create_node(4);

    p->left = p1;
    p1->left = p3;
    p1->right = p4;
    p->right = p2;
    printf("\n");
    printf("In-order is ");
    inorder(p);
    delete (p, 3);
    printf("\n");
    printf("In-order is ");
    inorder(p);
    return 0;
}