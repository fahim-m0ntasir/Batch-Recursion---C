#include<stdio.h>
#include<math.h>


int main()
{
    int num, sum = 0, temp, digitcount= 0, digit;
    printf("Enter a number:\t");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        temp/=10;
        digitcount++;
    }
    temp = num;
for (int i = digitcount; i > 0; i--)
{
   digit = temp/pow(10, i - 1);
   temp= temp%(int)pow(10, i - 1);
   printf("%d^%d\t", digit, digitcount);
   if (i > 1)
   {
    printf("+\t");
   }
   
   sum = sum + pow(digit, digitcount);
}
printf("\t=\t%d\n", sum);
if (sum == num)
{
    printf("%d is an Armstrong Number", num);
}
else{
    printf("%d is not an Armstrong Number", num);
}


    
    
    
    
    return 0;
}