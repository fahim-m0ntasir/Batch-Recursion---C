#include <stdio.h>
typedef struct student
{
    char first[20];
    char last[20];
    int roll;
    int reg;
} st;

int main()
{
   st students[2];

    for (int i = 0; i < 2; i++)
    {

        printf("Enter First Name:\t");
        scanf("%s", students[i].first);
        printf("Enter Last Name:\t");
        scanf("%s", students[i].last);
        printf("Enter Roll:\t");
        scanf("%d", &students[i].roll);
        printf("Enter Registration:\t");
        scanf("%d", &students[i].reg);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%d %d %s %s\n", students[i].roll, students[i].reg, students[i].first, students[i].last);
    }

    return 0;
}