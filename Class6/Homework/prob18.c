#include<stdio.h>
#include<math.h>

int main()
{
    int terms, sign = -1;
    double sum = 1.0 , x;
    printf("x =\t");
    scanf("%lf", &x);
    printf("How many terms?\t");
    scanf("%d", &terms);
    for (int i = 2; i <= terms; i+=2)
    {   
        int fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact*j;
        }
        sum = sum + sign*pow(x, i)/fact;
        sign *=-1;
        
    }
    printf("The sum is %lf", sum);
    
    return 0;
}