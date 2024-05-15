#include<stdio.h>
#include<math.h>


int main()
{
    int num ;
    printf("Enter the number:\t");
    scanf("%d", &num);
    unsigned long long  bin = 0;
    int temp = num;
    for (int i = 0; temp != 0; i++)
    {
        bin = bin+(temp%2)*pow(10, i);
        temp/=2;

    }
    printf("%d", bin);
    
    return 0;
}