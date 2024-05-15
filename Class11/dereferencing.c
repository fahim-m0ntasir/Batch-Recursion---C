#include<stdio.h>


int main()
{
    int x = 20;
    int y = 10;
    int *p = &x;
    int *a, *b;
    a = NULL;
    b = NULL;
    printf("%p\n", a);
    printf("%p\n", b);
    printf("Pointer\t%p\n",p);
    printf("Value\t%d\n", *p);
    p = &y;
    printf("Pointer\t%p\n",p);
    printf("Value\t%d\n", *p);
    *p = x;
    printf("Pointer\t%p\n",p);
    printf("Value\t%d\n", *p);
    printf("Value\t%d\n", x);
    printf("Value\t%d\n", y);
    return 0;
}