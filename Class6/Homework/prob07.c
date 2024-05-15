#include <stdio.h>

int main()
{
    printf("Enter the limit:\t");
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            printf("%d x %d = %d\t", i, j, j * i);
        }
        printf("\n");
    }

    return 0;
}