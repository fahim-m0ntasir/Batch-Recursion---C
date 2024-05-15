#include<stdio.h>


int main()
{
        int num1, num2;
    printf("Enter two integers:\t");
    scanf("%d %d", &num1, &num2);
    int high, low;
    if (num1>num2)
    {
         high = num1;
         low =num2;
    }
    else{
        high = num2;
        low = num1;
    }
    
    int hcf, temp;
    while (high%low != 0)
    {
        temp = high%low; // 16 // 
        high = low;      // 24 //
        low = temp; 

        
    }
    hcf = low;
    double lcm = (double)(num1*num2) / hcf;
    printf("lcm = %lf", lcm);
    return 0;
}