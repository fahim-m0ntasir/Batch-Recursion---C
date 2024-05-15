#include <stdio.h>
#include<stdlib.h>
int main()
{
    int total_Class;
    printf("Enter the total number of classes: ");
    scanf("%d", &total_Class);
    int num[12];
    int **marks;
    marks = (int**)malloc(total_Class*sizeof(int*));
    for (int i = 0; i < total_Class; i++)
    {
        printf("Enter the number of students of class %d: ", i+1);
        scanf("%d", &num[i]);
        marks[i]=(int*)malloc(sizeof(int)*num[i]);
        printf("Enter the marks of %d students: ", num[i]);
        for (int j = 0; j < num[i]; j++)
        {
            scanf("%d", &marks[i][j]);
        }
        
    }
    for (int i = 0; i < total_Class; i++)
    {
        for (int j = 0; j < num[i]; j++)
        {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
        
    }
    for (int i = 0; i < total_Class; i++)
    {
        free(marks[i]);
    }
    
    free(marks);
    return 0;
}