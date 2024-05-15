#include <stdio.h>
int main()
{
    double cel;
    scanf("%lf",&cel);
    printf("%.3lfdeg centigrade = %.3lfdeg fareignheight", cel, ((9.0/5)*cel) + 32);

    return 0;
}