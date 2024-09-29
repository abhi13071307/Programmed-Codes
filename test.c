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
struct Que q={.front=-1,.rear=-1};
struct Que *qtr;
qtr=q;
int main(){
    printf("%d ",q->front);
    return 0;
}