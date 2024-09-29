#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void inssrt(int *, int);
void selsrt(int *, int);
int n, i;
clock_t t;
int main()
{
    int *ar;
    int *car;
    int choice;
    printf("\nEnter The Size Of Array: ");
    scanf("%d", &n);
    ar = (int *)malloc(n * sizeof(int));
    car = (int *)malloc(n * sizeof(int));
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        ar[i] = rand() % 100;
    }
    printf("Array Before Sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    while (1)
    {
        printf("\n_______________MENU_________________");
        printf("\n1. Insertion sort");
        printf("\n2. Selection sort");
        printf("\n3. Merge Sort");
        printf("\n4. Quick sort");
        printf("\n5. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n_______Insertion Sort_______\n");
            printf("\nArray Before Sorting: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", car[i]);
            }
            t = clock();
            inssrt(car, n);
            t = clock() - t;
            double tt1 = ((double)t) / CLOCKS_PER_SEC;
            printf("\nArray After Sorting: ");
            for (i = 1; i <= n; i++)
            {
                printf("%d ", car[i]);
            }
            printf("\nThis Function Took %f seconds to execute \n", tt1);
            break;
        case 2:
            printf("\n_______Selection Sort_______\n");
            printf("\nArray Before Sorting: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", car[i]);
            }
            t = clock();
            selsrt(car, n);
            t = clock() - t;
            printf("\nArray After Sorting: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", car[i]);
            }
            double tt2 = ((double)t) / CLOCKS_PER_SEC;
            printf("\nThis Function Took %f seconds to execute \n", tt2);
            break;
        case 3:
            printf("\n_______Merge Sort_______\n");
            printf("\nArray Before Sorting: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", car[i]);
            }
            t = clock();
            t = clock() - t;
            double tt3 = ((double)t) / CLOCKS_PER_SEC;
            printf("\nArray After Sorting: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", car[i]);
            }
            printf("\nThis Function Took %f seconds to execute \n", tt3);
            break;
        case 4:
            printf("\n_______Quick Sort_______\n");
            printf("\nArray Before Sorting: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", car[i]);
            }
            t = clock();
            t = clock() - t;
            double tt4 = ((double)t) / CLOCKS_PER_SEC;
            printf("\nArray After Sorting: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", car[i]);
            }
            printf("\nThis Function Took %f seconds to execute \n", tt4);
            break;
        case 5:
            exit(1);
        }
    }
    return 0;
}
void inssrt(int *arr, int size)
{
    int key, k;
    for (k = 1; k <= size; k++)
    {
        key = arr[k];
        for (i = k - 1; i >= 0 && key < arr[i]; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[i + 1] = key;
    }
}
void selsrt(int *arr, int size)
{
    for (i = 0; i < n - 1; i++)
    {
        int small = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[small])
                small = j;
        int temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;
    }
}