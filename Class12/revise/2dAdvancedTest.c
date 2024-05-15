#include <stdio.h>
#include<stdlib.h>
int main()
{
    int numofclasses;
    printf("How many classes?\t");
    scanf("%d", &numofclasses);
    int **marks, *numofstudents;
    marks = (int**)malloc(sizeof(int*)*numofclasses);
    numofstudents = (int*)malloc(sizeof(int*)*numofclasses);
    for (int i = 0; i < numofclasses; i++)
    {
        printf("How many students in class %d?\t", i+1);
        scanf("%d", numofstudents+i);
        marks[i] = (int*)malloc(sizeof(int)*numofstudents[i]);
        printf("Enter the marks of %d students from class %d:\n", numofstudents[i], i+1);
       for (int j = 0; j < numofstudents[i]; j++)
       {
        scanf("%d", marks[i]+j);
       }
       
        
    }
    for (int i = 0; i < numofclasses; i++)
    {
        for (int j = 0; j < numofstudents[i]; j++)
        {
            printf("%d ", *(*(marks+i)+j));
        }
        printf("\n");
    }
    for (int i = 0; i < numofclasses; i++)
    {
        free(marks[i]);
        
    }
    free(marks);
    
    


    
    
}