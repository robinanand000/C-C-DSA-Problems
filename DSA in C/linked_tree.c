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
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
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
int main()
{
    //     struct node *p = (struct node *)malloc(sizeof(struct node));
    //     p->data = 1;
    //     p->left = NULL;
    //     p->right = NULL;

    //     struct node *p1 = (struct node *)malloc(sizeof(struct node));
    //     p1->data = 5;
    //     p1->left = NULL;
    //     p1->right = NULL;

    //     struct node *p2 = (struct node *)malloc(sizeof(struct node));
    //     p2->data = 3;
    //     p2->left = NULL;
    //     p2->right = NULL;

    //    it is one way of making tree but here repetion is more..so efficiently ,we will make fuction " create_node"

    struct node *p = create_node(4);
    struct node *p1 = create_node(1);
    struct node *p2 = create_node(6);
    struct node *p3 = create_node(5);
    struct node *p4 = create_node(2);

    p->left = p1;
    p1->left = p3;
    p1->right = p4;
    p->right = p2;

    printf("Pre-order is ");
    preorder(p);
    printf("\n");
    printf("Post-order is ");
    postorder(p);
    printf("\n");
    printf("In-order is ");
    inorder(p);

    return 0;
}