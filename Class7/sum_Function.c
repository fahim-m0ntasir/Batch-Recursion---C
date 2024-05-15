#include<stdio.h>

float sum(int x, int y){
    return x+y;
}
int main()
{
    float a = 5, b = 89;
    printf("%f", sum(a, b));
    return 0;
}