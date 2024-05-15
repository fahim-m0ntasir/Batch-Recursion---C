#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, temp, digitcount, digit, sum;
    printf("Starting Number\t-->\t");
    scanf("%d", &num1);
    printf("Ending Number\t-->\t");
    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++)
    {
        temp = i;
        digitcount = 0;
        sum = 0;
        while (temp != 0)
        {
            temp /= 10;
            digitcount++;
        }
        temp = i;
        // for (int j = digitcount; j > 0; j--) // starts from the very front digit, suppose the number is 1634
        // {
        //     digit = temp/((int)pow(10, j - 1)); // 1    6   3   4
        //     temp = temp %((int)pow(10, j - 1)); //634   34  4   0
        //     sum = sum + (int) pow(digit, digitcount);
        // }
        // if (sum == i)
        // {
        //     printf("%d\t", i);
        // }
        // printf("%d --> %d\n",i, digitcount);

        // }

        // for (int i = num1; i <= num2; i++)
        // {
        //     sum = 0;
        //     temp = i;

        //     // Need to count digits while using this code, but counts backwards
        //     // digitcount = (int)log10(i)+1;
        //     // for (int j = 1; j <= digitcount; j++) // 1634
        //     // {
        //     //     digit = temp%10; // 4    3
        //     //     temp = temp/10; // 163  16
        //     //     sum = sum + pow(digit, digitcount);
        //     // }
        //     // if (sum == i && i > 10)
        //     // {
        //     //     printf("%d\t", i);
        //     // }
        //

        while (temp != 0)
        {
            digit = temp % 10;
            temp = temp / 10;
            sum = sum + pow(digit, digitcount);
        }
        if (sum == i)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}