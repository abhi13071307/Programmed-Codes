#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("\nEnter The Length Of The Series: ");
    scanf("%d",&n);
    printf("\nFibonnaci Series: ");
    for(int i=0;i<n;i++)
    printf("%d ",fib(i));
    return 0;
}
int fib(int num){
    if(num==0||num==1)
    return num;
    else{
        return (fib(num-1)+fib(num-2));
    }
}