#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,temp,ar[10],n;
    printf("\nEnter The Size Of Array: ");
    scanf("%d",&n);
    printf("\nEnter The Elements Of Array: ");
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    printf("\nThe Given Array Is: ");
    for(i=0;i<n;i++)
    printf("%d ",ar[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    printf("\nThe Array After Sorting: ");
    for(i=0;i<n;i++)
    printf("%d ",ar[i]);
    return 0;
}