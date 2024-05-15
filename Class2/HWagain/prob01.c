#include <stdio.h>
#include <string.h>
int main()
{
 int inp1, inp2;
 scanf("%d %d", &inp1, &inp2);
 printf("%d + %d = %d\n", inp1, inp2, inp1+inp2);
 printf("%d - %d = %d\n", inp1, inp2, inp1-inp2);
 printf("%d * %d = %d\n", inp1, inp2, inp1*inp2);
 printf("%d / %d = %f\n", inp1, inp2, (float)inp1/inp2);
 printf("%d %c %d = %d\n", inp1,'%', inp2, inp1%inp2);
    return 0;
}