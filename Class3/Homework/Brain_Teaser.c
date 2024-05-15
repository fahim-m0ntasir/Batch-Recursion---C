// #include<stdio.h>

// int main()
// {
//     int num;
//     printf("Enter a 3 digit number:\t");
//     scanf("%d", &num);

//     // 233
//     int digit1 = num/100; //2
//     int digit2 = (num%100)/10;//3
//     int digit3 = (num%100)%10;
//     int mirror = digit3*100+digit2*10+digit1 ;
//     printf("%d\n%d\n%d\n", digit1, digit2, digit3);
//     printf("Beautiful Value = %d", mirror +10);

// return 0;

// }
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a random number\t-->\t");
    scanf("%d", &number);
    int temp = number, beautifulValue = 0;
    while (temp != 0)
    {

        // 789
        beautifulValue = beautifulValue + temp % 10; // 9+8
        temp /= 10;                                  // 78 7
    }
    printf("Beautiful Value --> %d", beautifulValue);

    return 0;
}