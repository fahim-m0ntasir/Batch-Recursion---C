#include<stdio.h>
#include<math.h>

int main()
{
    int integer;
    printf("Enter the integer:\t");
    scanf("%d", &integer);
    int digit1, digit2, digit3, digit4;
    // digit1= integer/1000;
    // digit2= (integer%1000)/100;
    // digit3= ((integer%1000)%100)/10;
    // digit4= ((integer%1000)%100)%10;

   // 2344
    digit1 = integer/1000; //2
    integer = integer%1000;//344
    digit2 = integer/100;//3
    integer = integer%100;//44
    digit3 = integer/10;//4
    digit4 = integer%10;//4
    printf("Digit(1) = %d\n", digit1);
    printf("Digit(2) = %d\n", digit2);
    printf("Digit(3) = %d\n", digit3);
    printf("Digit(4) = %d\n", digit4);
    printf("Beatiful value:\t%d", digit1*digit1+digit2*digit2+digit3*digit3+digit4*digit4);
    return 0;
} 