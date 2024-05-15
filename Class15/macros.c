#include<stdio.h>
#include<math.h>
#define max(a, b) (a>b?a:b)
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", max(n, m));
    return 0;
}