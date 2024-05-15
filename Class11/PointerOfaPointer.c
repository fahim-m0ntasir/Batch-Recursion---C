#include<stdio.h>


int main()
{
int a = 10;
int *p = &a;
printf("Value of a is %d\n", a);
printf("Value of a is %d\n", *p);
printf("Address of a is %p\n", &a);
printf("Address of a is %p\n", p);
printf("Address of p is %p\n", &p);
int **q = &p;
printf("Value of a is %d\n", **q);
printf("Address of a is %p\n", *q);
printf("Address of p is %p\n", q);

    return 0;
}