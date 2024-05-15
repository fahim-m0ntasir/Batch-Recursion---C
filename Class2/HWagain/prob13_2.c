// #include <stdio.h>
// #include <math.h>

// trying to find digit at first
// int digitcount(long n)
// {
//     long temp = n;
//     int count = 0;
//     while (temp)
//     {
//         temp /= 10;
//         count++;
//     }
//     return count;
// }
// int digitfind(long n, int d)
// {
//     int numdigit = digitcount(n);
//     long temp = n;
//     temp /=pow(10, numdigit - d);

//     temp %= 10;
//     return temp;
// }
// int main()
// {
//     int num = 967845;
//     // printf("%d", digitfind(num, 4));
//     int mul = 1;
//     for (int i = 1; i <= digitcount(num); i++)
//     {
//         mul *= digitfind(num, i);
//     }
//     printf("%d", mul);
//     return 0;
// }


// Easier Approach:
#include <stdio.h>
int digitcount(int n)
{
    int temp = n;
    int count = 0;
    while (temp)
    {
        temp /= 10;
        count++;
    }
    return count;
}

int main()
{
    int num = 967845;
    int mul = 1;
    int temp = num, digit;

    // for (int  i = 1; i <= digitcount(num); i++)
    // {
    //     digit= temp % 10;
    //     temp /=10;
    //     mul *=digit;
    // }
    // printf("%d", mul);


// Easiest way:
    while (temp)
    {
        digit = temp%10;
        temp /=10;
        mul *=digit;
    }
    printf("%d", mul);
    
    


    return 0;
}