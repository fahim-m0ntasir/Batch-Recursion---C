#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact *i;
    }
    return fact;
}

int main()
{
    for (int i = 0; i <= 16; i++)
    {
   printf("%d! = %d\n", i, factorial(i));
    }
    
    return 0;
}