#include<stdio.h>
struct test
{
    int age;
    int matches; 
    float b;  
};
union test1
{
    int uage;
    int umatches;
    double a;
};
int main()
{
    struct test t[5];
    union test1 ut;
    //Structure combine all the variable's space to create space in the memory:
    printf("%u",sizeof(struct test));
    //Union uses the space of the largest variable in the memory: 
    printf("\n%u",sizeof(union test1));
    return 0;
}