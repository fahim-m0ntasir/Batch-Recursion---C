#include <stdio.h>
int main()
{
    char ID[10];
    int wh, sh;
    printf("Input the Employees ID: \t");
    scanf("%s", &ID)   ;
    printf("Input working hours:\t");
    scanf("%d", &wh);
    printf("Salary amount/hr:\t");
    scanf("%d", &sh);
    printf("Employee ID\t: %s\n", ID);
    printf("Salary\t: %d\n", wh*sh);
    return 0;
}