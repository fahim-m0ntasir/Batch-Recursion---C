#include <stdio.h>
int fact(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
float power(int base, int pow){
    float result=1;
    for (int i = 0; i < pow; i++)
    {
        result *=base;
    }
    return result;
    
}
int main()
{
    int x;
    int n;
    scanf("%d %d", &x, &n);
    float sum = 1, term = 0;
    for (int i = 1; i < n; i++)
    {
        term = ((i%2!=0)?-1:1)*power(x, 2*i)/fact(2*i);
        sum = term+sum;
    }
    printf("%f", sum);
    

    return 0;
}