#include<stdio.h>


int main()
{
    int high, low;
    printf("Enter the bigger number:\t");
    scanf("%d", &high);
    printf("Enter the other number:\t");
    scanf("%d", &low);
    int hcf, temp;
    while (high%low != 0)
    {
        temp = high%low; // 16 // 
        high = low;      // 24 //
        low = temp; 

        
    }
    hcf = low;
    printf("HCF = %d", hcf);
    
    
    
    return 0;
}