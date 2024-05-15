#include <stdio.h>
#include <math.h>
int factorial(int x)
{
    int factorial = 1;
    for (int i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
double cosine(double num, int term)
{
    double sum = 1.0;
    int sign = -1;
    for (int i = 2; i <= term; i += 2)
    {
        sum = sum + sign * pow(num, i) / factorial(i);
        sign *= -1;
    }

    return sum;
}

int main()
{
    // star print
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 1; j <= 3; j++)
    //     {
    //         if (i==3&&j==3)
    //         {
    //             printf("1 ");
    //         }
    //         else {
    //             printf("* ");
    //         }
    //     }
    //     printf("\n");

    // }

    // Another Pattern
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int  j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");

    // }

    // Another one
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int  j = 1; j <= i; j++)
    //     {
    //         printf("%d ", j);
    //     }
    //     printf("\n");

    // }

    // Another one
    // int termcount = 1;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int  j = 1; j <= i; j++)
    //     {
    //         printf("%d ", termcount);
    //        termcount++;
    //     }
    //     printf("\n");

    // }

    // My undesired parallelogram Pattern
    // num of stars = 2*row-1;
    // int n = 10;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int space = 1; space <= n - row; space++)
    //     {
    //         printf("  ");
    //     }
    //     for (int star = 1; star <= (2*n)-1; star++) // switching n with row makes the star pattern
    //     {
    //        printf("* ");
    //     }
    //     printf("\n");

    // }

    // My desired Star Patten(pyramid)
    // int n = 5;
    // for (int row = 1 ; row <= n; row++)
    // {
    //     for (int space = 1; space <= n - row; space++)
    //     {
    //         printf("- ");
    //     }
    //     for (int star = 1; star <= 2*row-1; star++)
    //     {
    //         printf("* ");
    //     }
    //     for (int space = 1; space <= n - row; space++)
    //     {
    //         printf("- ");
    //     }
    //     printf("\n");

    // }

    // Reverse Pyramid
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int space = 0; space < row -1 ; space++)
    //     {
    //         printf("- ");
    //     }
    //     for (int star = 2*(n-(row-1)) - 1; star >= 1; star--)
    //     {
    //         printf("* ");
    //     }
    //     for (int space = 0; space < row - 1; space++)
    //     {
    //         printf("- ");
    //     }
    //     printf("\n");
    // }

    // Better way:
    // for (int row = n ; row > 0; row--)
    // {
    //     for (int space = 1; space <= n - row; space++)
    //     {
    //         printf("- ");
    //     }
    //     for (int star = 1; star <= 2*row-1; star++)
    //     {
    //         printf("* ");
    //     }
    //     for (int space = 1; space <= n - row; space++)
    //     {
    //         printf("- ");
    //     }
    //     printf("\n");

    // }

    // Dimond Pattern:
    // int n = 4;
    // for (int i = 1 ; i <= n; i++)
    // {
    //     for (int space = 1; space <= n - i; space++)
    //     {
    //         printf("- ");
    //     }
    //     for (int star = 1; star <= 2*i-1; star++)
    //     {
    //         printf("* ");
    //     }
    //     for (int space = 1; space <= n - i; space++)
    //     {
    //         printf("- ");
    //     }
    //     printf("\n");

    // }
    // for (int i = n-1 ; i > 0; i--)
    // {
    //     for (int space = 1; space <= n - i; space++)
    //     {
    //         printf("- ");
    //     }
    //     for (int star = 1; star <= 2*i-1; star++)
    //     {
    //         printf("* ");
    //     }
    //     for (int space = 1; space <= n - i; space++)
    //     {
    //         printf("- ");
    //     }
    //     printf("\n");

    // }

    // Armstrong Number between two random numbers
    // int num1, num2, temp, digitcount, sum, digit;
    // printf("Starting number\t-->\t");
    // scanf("%d", &num1);
    // printf("Starting number\t-->\t");
    // scanf("%d", &num2);

    // Method 1:
    // for (int i = num1; i <= num2; i++)
    // {
    //     temp = i;
    //     digitcount = 0;
    //     sum = 0;
    //     digit = 0;
    //     while (temp != 0)
    //     {
    //         temp/=10;
    //         digitcount++;
    //     }
    //     temp = i;
    //     for (int j = 1; j <= digitcount; j++)
    //     {
    //        digit = temp/pow(10, digitcount - j);
    //        temp %= (int)pow(10, digitcount - j);
    //        sum = sum + pow(digit, digitcount);
    //     }
    //     if (sum == i)
    //     {
    //        printf("%d\t", i);
    //     }

    // }

    // Method 2:
    // for (int i = num1; i <= num2; i++)
    // {
    //     digit = 0;
    //     digitcount = 0;
    //     sum = 0;
    //     temp = i;
    //     while (temp != 0)
    //     {
    //         temp /= 10;
    //         digitcount++;
    //     }
    //     temp = i;
    //     while (temp != 0)
    //     {
    //         digit = temp % 10;
    //         temp /= 10;
    //         sum = sum + pow(digit, digitcount);
    //     }
    //     if (sum == i)
    //     {
    //         printf("%d\t", i);
    //     }
    // }

    // Prime Numbers
    // int num1, num2, is_prime = 1;
    // printf("Starting number\t-->\t");
    // scanf("%d", &num1);
    // printf("Starting number\t-->\t");
    // scanf("%d", &num2);
    // for (int i = num1; i <= num2; i++)
    // {
    //     for (int j = 2; j < i; j++)
    //     {
    //         if (i%j == 0)
    //         {
    //             is_prime = 0;
    //             break;
    //         }
    //         else{
    //             is_prime = 1;
    //         }

    //     }
    //     if (is_prime == 1)
    //     {
    //         printf("%d\t", i);
    //     }

    // }

    // cos series;

    // function above;
    // printf("%lf\n", cosine(3.14/3, 8));
    printf("%lf\n", cos(3.14 / 3));
    double sum = 1;
    int sign = -1;
    float x = 2;
    int term = 5;
    for (int i = 2; i <= term; i +=2)
    {
        int fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact*j;
        }
        sum = sum + sign*pow(x, i)/fact;
        sign *=-1;
        
    }
    printf("%lf", sum);

    return 0;
}