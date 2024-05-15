#include <stdio.h>
int increment(int n)
{
    return n++;
}
int increment1(int n)
{
    return ++n;
}
int increment2(int n)
{
    n++;
}

int increment3(int *n)
{
    (*n)++;
}

int main()
{
    int a = 10, b = 20, c = 30, d = 40;
    a = increment(a);
    b = increment1(b);
    increment2(c);
    increment3(&d);
    printf("a = %d\n", a); // 10
    printf("b = %d\n", b); // 21
    printf("c = %d\n", c); // 30
    printf("d = %d\n", d); // 41

        return 0;
}