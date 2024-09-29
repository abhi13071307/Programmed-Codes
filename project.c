#include<stdio.h>
#include<stdlib.h>
char A[9]={'1','2','3','4','5','6','7','8','9'};
void show();
void play();
int fin();
void update(char, char);
int player;
int main()
{
    int flag=1,k;
    printf("\n\n");
    printf("\t\t\t TIC-TAC-TOE GAME\n");
    do{
    show();
    play();
    k=fin();
    if(k==10)
    {
        show();
        printf("\nPlayer 1 Won!!!");
        flag=0;
    }
    else if(k==20)
    {
        show();
        printf("\nPlayer 2 Won!!!");
        flag=0;
    }
    }while(flag!=0);
    return 0;
}
void show()
{
    printf("\n\t\t\t-----|-----|-----\n");
    printf("\t\t\t %c   |  %c  |  %c \n",A[0],A[1],A[2]);
    printf("\t\t\t-----|-----|-----\n");
    printf("\t\t\t %c   |  %c  |  %c \n",A[3],A[4],A[5]);
    printf("\t\t\t-----|-----|-----\n");
    printf("\t\t\t %c   |  %c  |  %c \n",A[6],A[7],A[8]);
    printf("\t\t\t-----|-----|-----\n");
    printf("\n\nPlayer 1 Symbol: x\n");
    printf("Player 2 Symbol: o\n");
}
void play()
{
    char pos,sym;
    printf("\nEnter Position And Symbol: ");
    scanf(" %c",&pos);
    scanf(" %c",&sym);
    if(sym=='x'||sym=='X'||sym=='o'||sym=='O')
    update(pos,sym);
    else
    printf("\nEnter Symbol Is Wrong As Per The Game. \n");
    return;
}
void update(char p, char s)
{
    for(int i=0;i<9;i++)
    {
        if(A[i]==p)
        {
            A[i]=s;
        }
    }
}
int fin()
{
    if((A[0]=='x'&&A[1]=='x'&&A[2]=='x')||(A[0]=='x'&&A[3]=='x'&&A[6]=='x')||(A[0]=='x'&&A[4]=='x'&&A[8]=='x'))
    return(10);
    else if((A[0]=='o'&&A[1]=='o'&&A[2]=='o')||(A[0]=='o'&&A[3]=='o'&&A[6]=='o')||(A[0]=='o'&&A[4]=='o'&&A[8]=='o'))
    return(20);
    else if((A[1]=='x'&&A[4]=='x'&&A[7]=='x'))
    return(10);
    else if((A[1]=='o'&&A[4]=='o'&&A[7]=='o'))
    return(20);
    else if((A[2]=='x'&&A[5]=='x'&&A[8]=='x'))
    return(10);
    else if((A[2]=='o'&&A[5]=='o'&&A[8]=='o'))
    return(20);
    else if((A[3]=='x'&&A[4]=='x'&&A[5]=='x'))
    return(10);
    else if((A[3]=='o'&&A[5]=='o'&&A[5]=='o'))
    return(20);
    else if((A[6]=='x'&&A[7]=='x'&&A[8]=='x'))
    return(10);
    else if((A[6]=='o'&&A[7]=='o'&&A[8]=='o'))
    return(20);
    else if((A[2]=='x'&&A[4]=='x'&&A[6]=='x'))
    return(10);
    else if((A[2]=='o'&&A[4]=='o'&&A[6]=='o'))
    return(20);
    else
    return(1);
}