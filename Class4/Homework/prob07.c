#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double x1, x2, discriminant;

    printf("a =\t");
    scanf("%lf", &a);
    printf("b =\t");
    scanf("%lf", &b);
    printf("c =\t");
    scanf("%lf", &c);
    discriminant = pow(b, 2) - 4 * a * c;

    if (a == 0 && b == 0)
    {
        printf("no equation is possible");
    }

    else
    {
        if (discriminant < 0)
        {
            printf("x = %lf + %lfi, %lf - %lfi", -b / (2 * a), sqrt( - discriminant) / (2 * a), -b / (2 * a), sqrt( - discriminant) / (2 * a)); // be careful in this line, we have to make the discriminant positive as we put (i) next to it 
        }
        else
        {
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("x = %.2lf, %.2lf", x1, x2);
        }
    }

    return 0;
}