#include <stdio.h>

int main()
{
    int x = 20;
    int *p = &x;
    printf("Value of x is %d\n", x);
    printf("Value of x is %d\n", *p);
    printf("Address of x is %p\n", &x);
    printf("Address of x is %p\n", p);
    // Whatever happens on *p, gets reflected on x and vice-versa
    (*p)++;
    printf("Value of x is %d\n", x);
    x = x + 100;
    printf("Value of x is %d\n", *p);
    return 0;
}