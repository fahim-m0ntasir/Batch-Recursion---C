#include <stdio.h>
#include<string.h>
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



void calculate_grade(studenttype *student){
    if (student->marks >=80)
    {
        strcpy(student->grade, "A+");
    }
    else if (student->marks >=70)
    {
        strcpy(student->grade, "A");
    }
    else if (student->marks >=60)
    {
        strcpy(student->grade, "A-");
    }
    else if (student->marks >=50)
    {
        strcpy(student->grade, "B");
    }
    else if (student->marks >=40)
    {
        strcpy(student->grade, "C");
    }
    else if (student->marks >=30)
    {
        strcpy(student->grade, "C");
    }
    else if (student->marks < 30)
    {
        strcpy(student->grade, "F");
    }
    
}
int main()
{
    studenttype students[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter id\t:\t");
        scanf("%d", &students[i].id);
        printf("Enter first name\t:\t");
        scanf("%s", students[i].name.first);
        printf("Enter last name\t:\t");
        scanf("%s", students[i].name.first);
        printf("Enter marks\t:\t");
        scanf("%d", &students[i].marks);
        calculate_grade(&students[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Grade of the %dth student\t:\t%s\n", i+1, students[i].grade);
    }
    

    return 0;
}