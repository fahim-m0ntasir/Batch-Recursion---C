// #include <stdio.h>
// #include<math.h>
// int main()
// {
//     int number, digit = 0, digitcount = 0, revNum = 0;
//     printf("Random number -->\t");
//     scanf("%d", &number);
//     int temp = number;
//     while (temp != 0)
//     {
//         temp /= 10;
//         digitcount++;
//     }
//     temp = number;
//     while (temp != 0)
//     {
//         digit = temp%10;
//         temp /= 10;
//         revNum= revNum+digit*pow(10, digitcount-1);
//         digitcount--;
//     }
//     printf("%d", revNum);

//     return 0;
// }

// I solved it but yet it's not the effiecient way. Don't need to count digits at all

#include<stdio.h>


int main()
{
    int num, sum = 0, digit = 0, revnum = 0;
    printf("Enter a number:\t");
    scanf("%d", &num);
    int temp ;
    for (temp =num;temp != 0; temp/= 10)
    {
        digit = temp%10;
        revnum = revnum * 10 + digit;
        
    }
    
    printf("%d\n", revnum);
    return 0;
}