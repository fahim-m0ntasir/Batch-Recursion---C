#include<stdio.h>
#include<math.h>

int main()
{
    int power = pow(10,3); // 10 to the power 3, can't find the value if the power is not an integer.
    printf("%d\n", power);
    double root = sqrt(power);
    printf("%lf", root);
    return 0;
}