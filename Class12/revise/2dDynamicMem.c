#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numofclasses;
    
    printf("How many classes?\t");
    scanf("%d", &numofclasses);
    int numofstudents[numofclasses];
    int *stud[numofclasses];
    // int *stud = (int**)malloc(sizeof(int)*numofclasses);
    for (int i = 0; i < numofclasses; i++)
    {
        printf("How many students in class %d:\t", i + 1);
        scanf("%d", &numofstudents[i]);
        printf("Enter the marks of %d students:\t", numofstudents[i]);
        stud[i] = (int *)malloc(sizeof(int) * numofstudents[i]);
        for (int j = 0; j < numofstudents[i]; j++)
        {
            scanf("%d", &stud[i][j]);
        }
    }
    for (int i = 0; i < numofclasses; i++)
    {
        for (int j = 0; j < numofstudents[i]; j++)
        {
            printf("%d ", stud[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}