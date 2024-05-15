#include <stdio.h>

int main()
{
    int num1, num2, num3;
    // int first, second, third;
    printf("First Number =\t");
    scanf("%d", &num1);
    printf("Second Number =\t");
    scanf("%d", &num2);
    printf("Third Number =\t");
    scanf("%d", &num3);
    if (num1 == num2 && num2 == num3 && num3 == num1)
    {
        printf("All are equal");
    }
    else if (num1 == num2 && num3 != num1)
    {
        if (num3 > num1)
        {
            printf("%d > %d", num3, num1);
        }
        else
        {
            printf("%d > %d", num1, num3);
        }
    }
    else if (num2 == num3 && num1 != num3)
    {
        if (num1 > num3)
        {
            printf("%d > %d", num1, num3);
        }
        else
        {
            printf("%d > %d", num3, num1);
        }
    }

    else if (num3 == num1 && num2 != num1)
    {
        if (num2 > num1)
        {
            printf("%d > %d", num2, num1);
        }
        else
        {
            printf("%d > %d", num1, num2);
        }
    }

    else if (num1 > num2 && num1 > num3)
    {
        if (num2 > num3)
        {
            printf("%d > %d > %d", num1, num2, num3);
            // first = num1;
            // second = num2;
            // third = num3;
        }
        else
        {
            printf("%d > %d > %d", num1, num3, num2);
            // first = num1;
            // second = num3;
            // third = num2;
        }
    }
    else if (num2 > num1 && num2 > num3)
    {
        if (num1 > num3)
        {
            printf("%d > %d > %d", num2, num1, num3);
            // first = num2;
            // second = num1;
            // third = num3;
        }
        else
        {
            printf("%d > %d > %d", num2, num3, num1);
            // first = num2;
            // second = num3;
            // third = num1;
        }
    }
    else
    {
        if (num1 > num2)
        {
            printf("%d > %d > %d", num3, num1, num2);
            // first = num3;
            // second = num1;
            // third = num2;
        }
        else
        {
            printf("%d > %d > %d", num3, num2, num1);
            // first = num3;
            // second = num2;
            // third = num1;
        }
    }

    // printf("%d > %d > %d", first, second, third);

    // if (num1 > num2 && num1 > num3)
    // {
    //     printf("%d is the biggest number", num1);
    // }
    // else if (num2 > num1 && num2 > num3)
    // {
    //     printf("%d is the biggest number", num2);
    // }
    // else
    // {
    //     printf("%d is the biggest number", num3);
    // }
    return 0;
}