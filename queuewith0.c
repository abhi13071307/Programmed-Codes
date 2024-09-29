//Abhishek Kumar 
//Batch-1 
//SAP ID- 500106851
//Implementation Of Queue With Structures. (Without Linked Lists)
#include<stdio.h>
#include<stdlib.h>
#define size 10
void insq();
void delq();
void showq();
void qrev();
int qfull();
int qempty();
struct Que                                      //Structure Definition
{
    int items[size];
    int front;
    int rear;
};
struct Que q={.front=0,.rear=0};
int main()                                        //Main Function
{
    int option;
    while(1){
    printf("\nOperation In Q: ");
    printf("\n1. Enque Operation");
    printf("\n2. Deque Operation");
    printf("\n3. Traversing Operation And Show");
    printf("\n4. Reversal Through Recursion");
    printf("\n5. Exit");
    printf("\nEnter Your Option: ");
    scanf("%d",&option);
    switch(option){
        case 1: insq();
                break;
        case 2: delq();
                break;
        case 3: showq();
                break;
        case 4: qrev();
                break;
        case 5: exit(1);
        default: printf("Invalid Input. ");
                 break;
    }
    }
    return 0;
}
void insq(){                                       //Insert Function
    int num;
    printf("\nInsertion Function\n");
    if(qfull()){
        printf("\nThe Queue Is Full.");
        return;
    }
    else{
        if(q.front==q.rear==0){
            q.front++;
            printf("Enter The number To Be Inserted: ");
            scanf("%d",&num);
            q.items[++q.rear]=num;
            return;
        }
        else{
            printf("Enter The number To Be Inserted: ");
            scanf("%d",&num);
            q.items[++q.rear]=num;
            return;
        }
    }
}
void delq(){                                        //Delete Function
    printf("\nDeletion Function\n");
    if(qempty()){
        printf("\nQueue Is Empty.");
    }
    else{
        printf("\nThe Element Deleted is %d",q.items[q.front]);
        q.front++;
    }
}
void showq(){                                        //Show Function
    printf("\nShow Function\n");
    if(qempty()){
        printf("\nQueue Is Empty.");
    }
    else{
        printf("\nElements Of The Queue Are: \n");
        for(int i=q.front;i<=q.rear;i++){
            printf("\n%d",q.items[i]);
        }
    }
}
int qfull(){                                     //Checking for Q Full
    if(q.rear==size-1)
    {
        return 1;
    }
    else 
    return 0;
}
int qempty(){                                   //Checking for Q Empty
    if(q.front==q.rear)
    {
        return 1;
    }
    else
    return 0;
}
void qrev(){                                       //Reversal Function
    printf("\nQueue Reversal Through Recurssion: ");
    if(qempty()){
        printf("The Queue Is Empty To Recursion Kaise Hoga Bhai??");
        return;
    }

}
                                     //_____________End Of Program_______________