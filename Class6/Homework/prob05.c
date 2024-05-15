#include<stdio.h>
#include<math.h>

int main()
{
    printf("Enter the terms:\t");
    int terms;
    scanf("%d", &terms);

    for (int i = 1; i <= terms; i++)
    {
        printf("Cube of %d = %.00lf\n", i, pow(i, 3));
    }
    
    return 0;
}