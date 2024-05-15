#include<stdio.h>



//Bitwise Not:
// ~ >> tilda
// it's an unary operator, it works on one variable
// flips all the bits: 0000>1111 (1's complement)
int main()
{
    int a = 0;
    int b = ~a;
    printf("%d %d\n", a, b);
    a = 7;
    b = ~a;
    printf("%d %d\n", a, b);
    // why -1?
    // 2's complement
    //  32 = 0 0 1 0 0 0 0 0
    // ~32 = 1 1 0 1 1 1 1 1 = -33
    //(2's)= 0 0 1 0 0 0 0 1 = 33(found it first)
    printf("%d %d\n", 32, ~32);
    //   7 = 0 0 0 0 0 1 1 1
    //  ~7 = 1 1 1 1 1 0 0 0 = -8
    //(2's)= 0 0 0 0 1 0 0 0 = 8
    printf("%d %d\n", 7, ~7);


    // So, there's pattern here, ~n results in -(n+1)
    return 0;
}