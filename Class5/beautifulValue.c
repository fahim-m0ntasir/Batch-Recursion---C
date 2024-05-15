#include <stdio.h>
#include<math.h>

int main()
{
    int number;
    printf("Enter a random number\t-->\t");
    scanf("%d", &number);
    int temp = number, beautifulValue = 0, digit_count = 0, x;
    while (temp != 0)
    {
        temp /=10;
        digit_count++;
    }
    // printf("%d", digit_count);
    temp = number;
    for (int i = digit_count; i > 0; i--)
    {
        x = temp/pow(10, i-1);
        temp = temp%(int)pow(10, i-1);
        printf("%dx%d\t", x,x);
        if (i>1)
        {
           printf("+\t");
        }
        else{
            printf("\t");
        }
        
        
        
        beautifulValue = beautifulValue+x*x;
    }
    printf("=\t%d", beautifulValue);
    





    // while (temp != 0)
    // {
    //     // First+second+third....
    //     // x = temp%10;
    //     // beautifulValue = beautifulValue + x;
    //     // temp /=10;
    //     // printf("%d", x);
    //     // if (temp!=0)
    //     // {
    //     //     printf("\t+\t");
    //     // }
    //     // else{
    //     //     printf("\t");
    //     // }



    //     // First*first + second*second + third*third
    //     //     x = temp%10;
    //     //     beautifulValue = beautifulValue + x*x;
    //     //     temp /=10;
    //     //     printf("%d*%d",x, x); // prints in reversed
    //     //     if (temp!=0)
    //     //     {
    //     //         printf("\t+\t");
    //     //     }
    //     //     else{
    //     //         printf("\t");
    //     //     }

    //     // }
    //     // printf("= %d", beautifulValue);
    // }
        return 0;
}