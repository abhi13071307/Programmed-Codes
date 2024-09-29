// Abhishek Kumar
// SAP ID 500106851
// MCA Batch 1 VIVA Dated 2nd November 2022
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
char ch;
struct node *create(struct node *, int);
void display(struct node *, int);
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);
void deleteele(struct node *, int);
void searchele(struct node *, int);
int main() // Main Function
{
    struct node *p = NULL;
    int choice, item, ele1, ele2;
    while (1)
    {
        printf("\n_______________BINARY TREE MENU_________________\n");
        printf("\n1. Create Binary Tree");
        printf("\n2. Display Binary Tree");
        printf("\n3. Pre-order Traversal.");
        printf("\n4. Addition");
        printf("\n5. Leaf Node");
        printf("\n6. Check Binary");
        printf("\n7. Delete Nodes.");
        printf("\n8. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            p=(struct node*)malloc(sizeof(struct node));
            printf("\nElement: ");
            scanf("%d",&ele1);
            p=create(p,ele1);
            for(int i=0;i<5;i++){
                scanf("%d",&ele1);
                create(p,ele1);
            }
            break;
        case 2:
            display(p, 1);
            break;
        case 3:
            printf("\nAddition.");
            break;
        case 4:
            printf("\nInorder Traversal");
            inorder(p);
            break;
        case 5:
            break;
        case 6:
            printf("\nEnter Element: ");
            scanf("%d", &ele1);
            searchele(p, ele1);
            break;
        case 7:
            printf("\nEnter Element: ");
            scanf("%d", &ele2);
            deleteele(p, ele2);
            break;
        case 8:
            exit(1);
        default:
            printf("\nInvalid Choice!!!");
            break;
        }
    }
    return 0;
}
struct node *create(struct node *ptr, int ele) // Creation and Insertion Function
{
    if (ptr == NULL)
    {
        printf("\nNode Created\n");
        ptr = (struct node *)malloc(sizeof(struct node));
        ptr->left = NULL;
        ptr->right = NULL;
        ptr->data = ele;
        return ptr;
    }
    else if (ele < ptr->data)
    {
        ptr->left = create(ptr->left, ele);
    }
    else
    {
        ptr->right = create(ptr->right, ele);
    }
    return ptr;
}
void display(struct node *ptr, int level) // Display Function
{
    if (ptr != NULL)
    {
        display(ptr->right, level + 1);
        for (int i = 0; i < level; i++)
            printf("   ");
        printf("%4d\n", ptr->data);
        display(ptr->left, level + 1);
    }
    return;
}
void inorder(struct node *ptr) // Inorder Traversal
{
    if (ptr != NULL)
    {
        inorder(ptr->left);
        printf("->");
        printf("%d", ptr->data);
        inorder(ptr->right);
    }
    return;
}
void deleteele(struct node *ptr, int item) // Delete Function
{
    printf("\nDelete Function.");
}
void searchele(struct node *ptr, int item) // Searching Function
{
    printf("\nSearch Function.");
}