#include <stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1 = 10;
    int num2 = 200;
    printf("a = %d\nb = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("a = %d\nb = %d\n", num1, num2);
    return 0;
}