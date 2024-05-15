#include <stdio.h>
#include <string.h>
typedef struct
{
    char first[20];
    char last[20];
} nametype;
typedef struct
{
    int id;
    nametype name;
    int marks;
    char grade[3];
} studenttype;
void gradeCount(studenttype *s)
{
    if (s->marks >= 80)
    {
        strcpy(s->grade, "A+");
    }
    else if (s->marks >= 70 && s->marks < 80)
    {
        strcpy(s->grade, "A");
    }

    else if (s->marks >= 60 && s->marks < 70)
    {
        strcpy(s->grade, "A-");
    }

    else if (s->marks >= 50 && s->marks < 60)
    {
        strcpy(s->grade, "B");
    }
    else if (s->marks >= 40 && s->marks < 50)
    {
        strcpy(s->grade, "C");
    }
    else if (s->marks >= 33 && s->marks < 40)
    {
        strcpy(s->grade, "D");
    }
    else if (s->marks < 33)
    {
        strcpy(s->grade, "F");
    }
}

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    studenttype student[n];
    for (int i = 0; i < n; i++)
    {
        printf("Info of Student %d:\n", i + 1);
        printf("Id:\t:\t");
        scanf("%d", &student[i].id);
        printf("Name\t:\t");
        scanf("%s", student[i].name.first);
        scanf("%s", student[i].name.last);
        printf("Marks\t:\t");
        scanf("%d", &student[i].marks);
        gradeCount(&student[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Id\t:\t%d\n", student[i].id);
        printf("Name\t:\t%s %s\n", student[i].name.first, student[i].name.last);
        printf("Marks\t:\t%d\n", student[i].marks);
        printf("Grade\t:\t%s\n", student[i].grade);
    }

    return 0;
}