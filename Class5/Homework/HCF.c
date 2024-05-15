#include<stdio.h>


int main()
{
    int num1, num2;
    int high, low, temp;

    printf("Enter the numbers:\t");
    scanf("%d %d", &num1, &num2);
    if (num1>num2)
    {
        high = num1;
        low = num2;
    }
    else{
        high = num2;
        low = num1;
    }
    while(high%low != 0)
    {
        temp = high%low; // 16 // 
        high = low;      // 24 //
        low = temp;      // 16 //
    }
    printf("HCF = %d", low);
    


    return 0;
}