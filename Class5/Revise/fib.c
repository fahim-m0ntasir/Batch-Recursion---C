#include <stdio.h>
int fib_itr(int n)
{
    int a = 0, b = 1;
    int fibreturn;
    for (int i = 0; i <= n; i++)
    {
        fibreturn = a;
        b = a + b;
        a = b - a;
    }
    return fibreturn;
}
int fib_rec(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\t", fib_itr(i));
    }
    printf("\n");
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\t", fib_rec(i));
    }
    return 0;
}