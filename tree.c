#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *p = NULL;
void create(struct node *);
void display(struct node *, int);
int main()
{
    int choice;
    while (1)
    {
        printf("\n_______________MENU_________________");
        printf("\n1. Create Tree");
        printf("\n2. Display Tree");
        printf("\n3. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            p = (struct node *)malloc(sizeof(struct node));
            create(p);
            break;
        case 2:
            printf("\nNodes Of The Binary Tree: \n\n");
            display(p, 1);
            break;
        case 3:
            exit(1);
        default:
            printf("\nInvalid Choice!!!");
            break;
        }
    }
    return 0;
}
void create(struct node *ptr)
{
    char ch;
    int item;
    struct node *nleft;
    struct node *nright;
    if (ptr != NULL)
    {
        printf("\nEnter The Element: ");
        scanf("%d", &ptr->data);
        printf("\nDo you want to add a left child of %d?(Y/N): ", ptr->data);
        scanf(" %c", &ch);
        if ((ch == 'y') || (ch == 'Y'))
        {
            nleft = (struct node *)malloc(sizeof(struct node));
            ptr->left = nleft;
            create(nleft);
        }
        else
        {
            ptr->left = NULL;
            create(NULL);
        }
        printf("\nDo you want to add a right child of %d?(Y/N): ", ptr->data);
        scanf(" %c", &ch);
        if ((ch == 'y') || (ch == 'Y'))
        {
            nright = (struct node *)malloc(sizeof(struct node));
            ptr->right = nright;
            create(nright);
        }
        else
        {
            ptr->right = NULL;
            create(NULL);
        }
    }
    return;
}
void display(struct node *ptr, int level)
{
    //CODE
}