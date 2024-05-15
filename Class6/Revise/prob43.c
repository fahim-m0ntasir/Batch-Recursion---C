#include <stdio.h>
int powr(int base, int power){
    int result=1;
    for (int i = 1; i <= power; i++)
    {
        result *=base;
    }
    return result;
}
int main()
{
    int bin;
    scanf("%d", &bin);
    
int temp = bin, dec= 0;
int i = 0;
    while (temp != 0)
    {
        dec = dec+(temp%10)*powr(2,i);
        temp/=10;
        i++;
    }
    printf("%d", dec);
    

    return 0;
}