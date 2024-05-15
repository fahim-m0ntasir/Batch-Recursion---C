#include <stdio.h>
#include<math.h>
int main()
{
    double a, b, c;
    printf("a =\t");
    scanf("%lf", &a);
    printf("b =\t");
    scanf("%lf", &b);
    printf("c =\t");
    scanf("%lf", &c);
    double discriminant;
    discriminant = b*b - 4 * a * c;
    // printf("Discriminant = %lf", discriminant);
    if (a == 0 && b == 0)
    {
        printf("No equation possible");
    }
    else
    {
        if (discriminant < 0)
        {
            double realpart = -b / (2 * a), imaginarypart = (sqrt(- discriminant) / (2 * a));
            printf("x = %lf + %lfi, %lf - %lfi", realpart, imaginarypart, realpart, imaginarypart);
        }
        else
        {
            double x1, x2;
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("x = %lf, %lf", x1, x2);
        }
    }
    return 0;
}