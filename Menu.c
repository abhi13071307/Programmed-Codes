#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    int choice;
    printf("\nEnter The Size Of Array: ");
    scanf("%d", &n);
    while (1)
    {
        printf("\n_______________MENU_________________");
        printf("\n1. ");
        printf("\n2. ");
        printf("\n3. ");
        printf("\n4. ");
        printf("\n5. ");
        printf("\n6. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("");
            break;
        case 2:
            printf("");
            break;
        case 3:
            printf("");
            break;
        case 4:
            printf("");
            break;
        case 5:
            break;
        case 6:
            exit(1);
        }
    }
    return 0;
}