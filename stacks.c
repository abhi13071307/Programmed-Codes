#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,ar[size];
void Push();
void Pop();
void show();
int main()
{
    int choice;
	while(1)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: show();
					break;
			case 4: exit(0);
			
			default: printf("\nInvalid choice!!");
		}
	}
    return 0;
}
void Push()
{
    int num;
    if(top==size-1)
    {
        printf("\nStack Overflowed");
    }
    else
    {
        printf("\nEnter Number To Be Added To Stack: ");
        scanf("%d",&num);
        top=top+1;
        ar[top]=num;
    }
}
void Pop()
{
    if(top==-1)
    {
        printf("\nStack Is Now Empty");
    }
    else 
    {
        printf("\nElement Popped is %d",ar[top]);
        top=top-1;
    }
}
void show()
{
    int i;
    if(top==-1)
    {
        printf("\nThe Stack Is empty");
    }
    else
    {
        printf("\nElements Of The Stack are: \n");
        for(i=top;i>=0;i--)
        {
            printf("%d",ar[i]);
            printf("\n");
        }
    } 
}