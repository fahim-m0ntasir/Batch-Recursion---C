#include <stdio.h>
int main()
{
    int num, shift;
    scanf("%d %d",&num, &shift);
    printf("After shifting %d bits: %d\n", num, num<<shift);
    //    256  128 64 32  16  8  4  2  1
    // 2 = 0   0   0   0   0  0  0  1  0 
    //     0   0   0   0   0  1  0  0  0  = 8 = 2*(2^2)

    printf("After shifting %d bits: %d\n", num, num>>shift);

    //    256  128 64 32  16  8  4  2  1
    // 8 = 0   0   0   0   0  1  0  0  0 
    //     0   0   0   0   0  0  0  1  0 = 

    return 0;
}