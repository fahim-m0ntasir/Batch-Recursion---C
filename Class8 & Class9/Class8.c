// #include<stdio.h>
// int sum(int n){
//     return n++;
// }

// int main()
// {
//     printf("%d", sum(5));
//     return 0;
// }

// Recursion:
// #include <stdio.h>
// int printhello(int n)
// {
//     if (n == 0)
//         return 1; // program terminates when return statement is found;
//     printf("Hello World\n");
//     printhello(n - 1);
// }
// int main()
// {
//     int n = 5;
//     printhello(n);
//     return 0;
// }

// Another Problem
// #include<stdio.h>
// int printNatural(int n){
//     if (n == 50)
//     {
//         return 0;
//     }
//     printf("%d\n", n);
//     printNatural(n+1);

// }

// int main()
// {
//     printNatural(10);
//     return 0;
// }

// Another Problem;
// #include <stdio.h>

// int sum(int n)
// {

//     if (n == 1)
//         return 1;

//     return sum(n - 1) + n;
// }

// int main()
// {
//     int num = 100;
//     int summation = sum(num);
//     printf("%d\n", summation);

//     return 0;
// }

// Digit add:
// #include<stdio.h>
// int digitadd(int num){
//     if (num < 10 /* n == 0 */  )
//     {
//        return num; /* return 0*/
//     }

//     return num%10 + digitadd(num/10);

// }

// int main()
// {
//     int n = 3423223;
//     printf("%d\n", digitadd(n));
//     return 0;
// }


// DigitCount:
// #include <stdio.h>
// int count = 0;
// int digitcount(int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }

//     count++;
//     return digitcount(num / 10);
// }

// int main()
// {
//     int n = 3423223;
//     digitcount(n);
//     printf("%d\n", count);
//     return 0;
// }

#include <stdio.h>
int digitcount(int n){
    if (n<10)
    {
        return 1;
    }
    return 1+digitcount(n/10);
    

    
}
int main()
{
    printf("%d", digitcount(50483489));
    return 0;
}