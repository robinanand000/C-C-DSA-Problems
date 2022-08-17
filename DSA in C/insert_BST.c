# include<stdio.h>
# include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create_node(int data)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}
void inorder(struct node* root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void insert(struct node* root, int element) {
    struct node* prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root->data == element)
        {
            printf("Can't insert , element already exists.\n");
            return;
        }
        else if (element < root->data) {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node* new = create_node(element);
    if (element < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}
int main() {

    struct node* p = create_node(5);
    struct node* p1 = create_node(3);
    struct node* p2 = create_node(6);
    struct node* p3 = create_node(2);
    struct node* p4 = create_node(4);

    p->left = p1;
    p1->left = p3;
    p1->right = p4;
    p->right = p2;
    printf("\n");
    printf("In-order is ");
    inorder(p);
    insert(p, 7);
    printf("\n");
    printf("In-order is ");
    inorder(p);
    return 0;
}