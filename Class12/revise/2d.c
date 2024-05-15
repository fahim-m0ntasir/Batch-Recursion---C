#include <stdio.h>
#include<stdlib.h>
int main()
{
    int numofclasses;
    scanf("%d", &numofclasses);
    int numofstudents[numofclasses];
    int *marks[numofclasses];
    for (int i = 0; i < numofclasses; i++)
    {
        printf("Enter number of students in class %d:\t", i+1);
        scanf("%d", numofstudents+i);
        marks[i] = (int*) malloc(sizeof(int)*numofstudents[i]);
        for (int j = 0; j < numofstudents[i]; j++)
        {
            scanf("%d", &marks[i][j]);
        }
        
        
    }
    
    for (int i = 0; i < numofclasses; i++)
    {
        for (int j = 0; j < numofstudents[i]; j++)
        {
            printf("%d\n", marks[i][j]);
        }
        printf("\n");
        
    }
    

    
    return 0;
}