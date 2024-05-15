#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double x1, x2;

    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    if (a == 0 && b == 0) {
        printf("No equation is possible");
    } else {
        double discriminant = pow(b, 2) - 4 * a * c;
        
        if (discriminant < 0) {
            printf("Imaginary Number");
        } else {
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("x1 = %.2lf, x2 = %.2lf", x1, x2);
        }
    }

    return 0;
}
