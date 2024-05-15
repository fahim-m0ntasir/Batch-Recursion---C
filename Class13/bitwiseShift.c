#include<stdio.h>


int main()
{
    // Left Shift : <<n
    // Right shift: >>n


    int a, n;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter how many bits you want to shift: ");
    scanf("%d", &n);
    printf("After left shifting %d bit(s), output is %d\n", n, a<<n);
    //    10 = 0 0 0 0 1 0 1 0
    // 10<<1 = 0 0 0 1 0 1 0 0 = 20 = 10*(2)^1
    // 10<<2 = 0 0 1 0 1 0 0 0 = 40 = 10*(2)^2
    // 10<<3 = 0 1 0 1 0 0 0 0 = 80 = 10*(2)^3
    printf("After right shifting %d bit(s), output is %d\n", n, a>>n);
    //    10 = 0 0 0 0 1 0 1 0
    // 10>>1 = 0 0 0 0 0 1 0 1 = 5 = 10/(2)^1
    



    return 0;
}