#include <stdio.h>
#include <math.h>

int main()
{
    int num, digitcount, digit, temp, sum = 0;
    printf("Enter a random number -->\t");
    scanf("%d", &num);
    digitcount = (int)log10(num) + 1;
    printf("%d\n", digitcount);
    temp = num;
    for (int i = digitcount; i > 0; i--)
    {
        digit = temp / ((int)pow(10, i - 1));
        temp = temp % ((int)pow(10, i - 1)); 
        printf("%d^%d\t", digit, digitcount);
        if (i > 1)
        {
            printf("+\t");
        }
        else
        {
            printf("\t");
        }
        sum = sum + pow(digit, digitcount);
    }
    printf("=\t%d", sum);
    if (sum == num)
    {
        printf("\n%d is an Armstrong Number", num);
    }
    else{
        printf("\t!=\t%d;\n%d is not an Armstrong Number", num, num);
    }
    

    return 0;
}