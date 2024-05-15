#include <stdio.h>
int main()
{
    float salary, tax;
    printf("Enter salary: ");
    scanf("%f", &salary);

    if (salary <= 1000)
    {
        printf("No tax");
    }
    else
    {
        if (salary > 1000 && salary < 2000)
        {
            tax = 50 + salary * 0.05;
            printf("tax = %f", tax);
        }
        else if (salary > 2000 && salary <= 2500)
        {
            tax = 60 + salary * 0.07;
            printf("tax = %f", tax);
        }

        else
        {
            tax = 100 + salary * 0.1;
            printf("tax = %f", tax);
        }
    }
}