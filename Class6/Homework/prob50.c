#include<stdio.h>
#include<math.h>


int main()
{
    int dec, oct = 0;
    printf("Enter a decimal number:\t");
    scanf("%d", &dec); 
    int temp = dec, digit;
   for (int i = 0; temp != 0; i++)
   {
        digit = temp%8; //7
        temp /=8; // 9
        oct = oct+digit*pow(10,i); // 70 
   }
   printf("DEC(%d) = OCT(%d)", dec, oct);
   
    
    return 0;
}