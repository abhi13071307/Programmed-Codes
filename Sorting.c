#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void inssrt(int *, int);
void selsrt(int *, int);
void mergesrt(int *, int, int);
void quicksrt(int *, int, int);
void showarr(int *, int);
int partition(int *, int, int);
void merge(int *, int, int, int);
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
        for (i = 0; i < n; i++)
        {
            car[i] = ar[i];
        }
        printf("\n_______________MENU_________________");
        printf("\n1. Insertion sort");
        printf("\n2. Selection sort");
        printf("\n3. Merge Sort");
        printf("\n4. Quick sort");
        printf("\n5. Show Array");
        printf("\n6. Exit");
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
            mergesrt(car, 0, n - 1);
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
            quicksrt(car, 0, n - 1);
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
            showarr(car, n);
            break;
        case 6:
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
void mergesrt(int *arr, int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergesrt(arr, beg, mid);
        mergesrt(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}
void quicksrt(int *arr, int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end);
        quicksrt(arr, start, p - 1);
        quicksrt(arr, p + 1, end);
    }
}
void showarr(int *arr, int size)
{
    printf("\nArray Is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int partition(int *arr, int start, int end)
{
    int pivot = arr[end];
    int i = (start - 1);
    for (int j = start; j <= end - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    int t = arr[i + 1];
    arr[i + 1] = arr[end];
    arr[end] = t;
    return (i + 1);
}
void merge(int *arr, int beg, int mid, int end)
{
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;
    int LeftArray[n1], RightArray[n2];
    for (int i = 0; i < n1; i++)
        LeftArray[i] = arr[beg + i];
    for (int j = 0; j < n2; j++)
        RightArray[j] = arr[mid + 1 + j];
    i = 0;
    j = 0;
    k = beg;
    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            arr[k] = LeftArray[i];
            i++;
        }
        else
        {
            arr[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = LeftArray[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = RightArray[j];
        j++;
        k++;
    }
}