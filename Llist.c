#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* start = NULL;
void traversal();
void insert();
void deleteele();
int main(){
    int choice;
    while(1){
    printf("\nMenu: ");
    printf("\n1. Create. ");
    printf("\n2. Show. ");
    printf("\n3. Delete. ");
    printf("\n4. Exit ");
    printf("\nEnter Your Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: insert();
                break;
        case 2: traversal();
                break;
        case 3: deleteele();
                break;
        case 4: exit(0);
        default: printf("\nInvalid choice!");
    }
    }
    return 0;
}
void traversal(){
    printf("\nTravesal");
    return;
}
void insert(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Element To Insert");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        temp->next=start;
        

    }
}
void deleteele(){
    printf("\nDelete");
    return;
}