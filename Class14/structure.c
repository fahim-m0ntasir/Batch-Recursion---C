#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct // typedef
{
    char first[20];
    char last[20];
 } nametype;

typedef struct studenttype
{
    int id;
    nametype name;
} st;

int main()
{
    // struct studenttype student_one;
    // // student_one.id = 45;
    // // student_one.name = "Rahaat";
    // printf("ID\t:\t");
    // scanf("%d", &student_one.id);
    // printf("Name\t:\t");
    // scanf("%s",student_one.name.first);
    // scanf("%s",student_one.name.last);
    // printf("ID\t:\t%d\n", student_one.id);
    // printf("Name\t:\t%s %s\n", student_one.name.first, student_one.name.last);
    // struct studenttype student[10];
   st student[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Info of Student %d:\n", i + 1);
        printf("Id:\t:\t");
        scanf("%d", &student[i].id);
        printf("Name\t:\t");
        scanf("%s", student[i].name.first);
        scanf("%s", student[i].name.last);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("ID\t:\t%d\n", student[i].id);
        printf("Name\t:\t%s %s\n", student[i].name.first, student[i].name.last);
    }

    return 0;
}