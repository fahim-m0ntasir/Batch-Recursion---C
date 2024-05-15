#include<stdio.h>
#include<string.h>


int main()
{
    char id[11];
    float work_hours, salary_hour;
    printf("Employee ID:\t");
    scanf("%s", &id);
    printf("Work hours:\t");
    scanf("%f", &work_hours);
    printf("Salary per hour:\t");
    scanf("%f", &salary_hour);
    printf("Employee ID:\t%s\n", id);
    printf("Salary:\t%.2f\n", 30*salary_hour*work_hours);
    
    return 0;
}   