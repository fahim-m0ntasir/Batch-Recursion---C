#include<stdio.h>
int hello();

int main()
{
    hello();
    hello();
   int hi = hello();
   printf("%d", hi);
    return 0;
}
int hello(){
    printf("Hello World\n");
    return 988;
}