#include <stdio.h>
void swap(int *a, int *b)
{
    printf("%d, %d\n%d, %d\n", a, b, *a, *b);
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int *ptra = &a, *ptrb = &b;
    printf("%d, %d\n%d, %d\n", a, b, ptra, ptrb);
    swap(ptra, ptrb);
    printf("%d %d", *ptra, *ptrb);
    return 0;
}