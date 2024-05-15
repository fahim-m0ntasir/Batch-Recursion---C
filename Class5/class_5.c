
#include <stdio.h>
#include <math.h>

int main()
{
    // Program to print the even number between 1 and 100
    //  int n = 100;
    //  for (int i = 1 , count = 1; i <= 2*n; i+=2, count++)
    //  {
    //      printf("%d --> %d\n", count, i);
    //  }

    // Program to print first 100 odd numbers
    // int n = 100;
    // int odd = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d -->%d\n", i, odd);
    //     odd += 2;
    // }

    // Program to print first n multiples of 3
    // int n = 100;
    // for (int i = 1, multiple; i <= n; i++)
    // {
    //     multiple = 3*i;
    //     printf("%d x %d\t=\t%d\n", 3, i, multiple );
    // }

    // Print a parallal series of numbers and the sum
    // int a, d, terms, sum;
    // printf("What's the first term\t-->\t");
    // scanf("%d", &a);
    // printf("What's the common difference\t-->\t");
    // scanf("%d", &d);
    // printf("How many terms?\t-->\t");
    // scanf("%d", &terms);
    // sum = 0;
    // for (int i = 1, number = a; i <= terms; i++)
    // {
    //     // i                    1 2 3     4
    //     printf("%d\t", number); // 1 2 3
    //     if (i < terms)
    //     {
    //         printf("+\t");
    //     }
    //     sum = number + sum; // 1 3 6
    //     number = number + d; // 2 3 4 (4 doesn't get printed)

    // }
    // printf("\t=\t%d", sum);

    // Print a geometric series of numbers and the sum
    // int a, d, terms, sum;
    // printf("What's the first term\t-->\t");
    // scanf("%d", &a);
    // printf("What's the common factor\t-->\t");
    // scanf("%d", &d);
    // printf("How many terms?\t-->\t");
    // scanf("%d", &terms);
    // sum = 0;
    // for (int i = 1, number = a; i <= terms; i++)
    // {
    //     printf("%d\t", number);
    //     if (i < terms)
    //     {
    //         printf("+\t");
    //     }
    //     sum = number + sum;
    //     number = number * d;

    // }
    // printf("=\t%d", sum);

    // Write a C Program calculate the sum Given Series until nth term (square)
    // int a, d, terms, sum = 0;
    // printf("What's the first term\t-->\t");
    // scanf("%d", &a);
    // printf("What's the common factor\t-->\t");
    // scanf("%d", &d);
    // printf("How many terms?\t-->\t");
    // scanf("%d", &terms);
    // for (int i = 1, number = a; i <= terms; i++)
    // {
    //     printf("%d*%d\t",number, number);
    //     sum += number*number;
    //     number = number + d;
    //     if (i<terms)
    //     {
    //         printf("+\t");
    //     }

    // }

    // printf("=\t%d", sum);

    // For natural numbers:
    // printf("How many terms?\t-->\t");
    // int terms, sum = 0;
    // scanf("%d", &terms);
    // for (int i = 1; i <= terms; i++)
    // {
    //     printf("%d*%d\t", i, i);
    //     sum += i * i;
    //     if (i < terms)
    //     {
    //         printf("+\t");
    //     }
    // }
    // printf("=\t%d", sum);

    // Check if the given inputs are even or odd;
    // int n_of_inputs;
    // int even_count = 0, odd_count =0;
    // printf("Number of inputs\t-->\t");
    // scanf("%d", &n_of_inputs);
    // int inputs[n_of_inputs-1];
    // for (int i = 0; i < n_of_inputs; i++)
    // {
    //     printf("Input(%d) -->\t", i+1);
    //     scanf("%d", inputs + i);
    // }
    // for (int i = 0; i < n_of_inputs; i++)
    // {
    //     if (inputs[i]%2==0)
    //     {
    //         printf("%d --> Even\n", inputs[i]);
    //         even_count++;
    //     }
    //     else
    //     {
    //        printf("%d --> Odd\n", inputs[i]);
    //        odd_count++;
    //     }

    // }
    // printf("Total Even Numbers\t-->\t%d\nTotal Odd Numbers\t-->\t%d\n", even_count, odd_count);

    // Factorial
    // int terms, factorial = 1;
    // printf("Enter the limit -->\t");
    // scanf("%d", &terms);
    // for (int i = 1; i <= terms; i++)
    // {
    //     factorial = factorial*i;

    // }
    // printf("%d! = %d", terms, factorial);

    // Find how many digits in a term
    // int number;
    // printf("Input a number:\t");
    // scanf("%d", &number); //7345
    // int digit_count = 0;
    // int temp = number;
    // while ( temp != 0)
    // {
    //     temp = temp/10; //734 73 7 0
    //     digit_count++;  // 1  2  3 4
    // }
    // printf("%d", digit_count);

    // Testing break and continue
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         if (j == 5)
    //         {
    //             continue;;
    //         }
    //         printf("%d %d Second loop\n", i , j);
    //     }
    //     printf(" %d First loop\n", i);

    // }

    // Prime or Non-Prime
    // int num, temp = 0;
    // printf("Enter a random number\t-->\t");
    // scanf("%d", &num);
    // for (int i = 2; i < num; i++)
    // {
    //     if (num%i == 0)
    //     {
    //         temp = 1;
    //     }

    // }
    // if (temp == 0)
    // {
    //     printf("Prime\n");
    // }
    // else{
    //     printf("Non Prime\n");
    // }

    // Find prime numbers between n1 and n2 (Brain Teaser)
    // int n1, n2;
    // printf("Starting number\t-->\t");
    // scanf("%d", &n1);
    // printf("Ending number\t-->\t");
    // scanf("%d", &n2);
    // int temp = 1;
    // for (int i = n1; i <= n2; i++)
    // {
    //     // temp = 1;
    //     for (int j = 2; j < i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             temp = 0; // Is divisable by j, not a prime number
    //             break;    // No need to check more, it might give an incorrect output
    //         }
    //         else
    //         {
    //             temp = 1;
    //         }
    //     }

    //     if (temp == 1)
    //     {
    //         printf("%d\t", i);
    //     }
    // }

    // pow(1,1)+pow(2,2)+pow(3,3)

    // int n, sum = 0;
    // printf("Number of terms -->\t");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d^%d\t", i,i);
    //     if (i<n)
    //     {
    //         printf("+\t");
    //     }
    //     else{
    //         printf("\t");
    //     }
    //     sum = sum+pow(i,i);
    // }
    // printf("=\t%d", sum);

    // 2+4+8+16=
    // int n, sum = 0;
    // printf("Number of terms -->\t");
    // scanf("%d", &n);
    // for (int i = 1, j = 2; i <= n; i++, j = j * 2)
    // {
    //     printf("%d\t", j);
    //     if (i < n)
    //     {
    //         printf("+\t");
    //     }
    //     else
    //     {
    //         printf("\t");
    //     }

    //     sum = sum + j;
    // }
    // printf("=\t%d", sum);

    // Variable swaping
    // Method 1:
    // int a = 5, b = 6;
    // printf("Before swaping,\n\t\ta = %d,\n\t\tb = %d\n", a, b);
    // int temp = a;
    // a = b;
    // b = temp;
    // printf("After swaping,\n\t\ta = %d,\n\t\tb = %d\n", a, b);
    
    //Method 2
        int a = 5, b = 6;
    printf("Before swaping,\n\t\ta = %d,\n\t\tb = %d\n", a, b);
    a = a+b; 
    b = a-b;
    a = a-b;
    printf("After swaping,\n\t\ta = %d,\n\t\tb = %d\n", a, b);

    return 0;
}