#include<stdio.h>
int factorial(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    return fact;
}
void series(int terms){
    int sum = 0;
    for (int i = 1; i <= terms; i++)
    {
        printf("%d!/%d ", i,i);
        if (i < terms)
        {
            printf("+ ");
        }
        sum = sum + factorial(i)/i;
    }
    printf("= %d", sum);
    
}

int main()
{
    int terms;
    printf("How many terms?");
    scanf("%d", &terms);
    series(terms);
    return 0;
}