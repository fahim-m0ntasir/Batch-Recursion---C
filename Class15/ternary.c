#include <stdio.h>

int main()
{
    // int a, b;
    // scanf("%d %d", &a, &b);
    // int max = (a>b)?a:b;

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = (c > ((a > b) ? a : b)) ? c : ((a > b) ? a : b);
    printf("%d", max);
    return 0;
}