#include<stdio.h>
#define swap(a, b){\
a = a+b; \
b = a-b; \
a = a-b; \
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    swap(n,m);
    printf("%d %d",n,m);

    return 0;
}