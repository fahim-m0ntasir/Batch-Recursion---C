#include <stdio.h>

int main()
{
    int num1, num2, sum = 0;
    printf("Startin Number\t-->\t");
    scanf("%d", &num1);
    printf("Ending Number\t-->\t");
    scanf("%d", &num2);

    for (int j = num1; j <= num2; j++)
    {
        sum = 0;
        for (int i = 1; i < j; i++)
        {
            if (j % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == j)
        {
            printf("%d\t", j);
        }
        
    }



    return 0;
}