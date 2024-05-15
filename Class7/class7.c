#include <stdio.h>

int main()

{
    int limit;
    printf("Limit:\t");
    scanf("%d", &limit);
    for (int j = 0; j <= limit; j++)
    {
        int num = j;
        int fact = 1;
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("%d!\t=\t%d\n", num, fact);
    }

    return 0;
}