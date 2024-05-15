#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **arr;
    arr = (int **)malloc(sizeof(int *) * 3);
    for (int i = 0; i < 3; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * 3);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", (*(arr + i) + j));
        }
    }
    // int arr[3][3]={{1,2,3}, {4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", (*(arr + i) + j));
        }
        printf("\n");
    }
printf("\n\n\n");
printf("%d\n", **arr+7);
printf("%d, %d\n", (*arr+4), &arr[1][1]);
printf("%d\n", *(*arr+4));

    return 0;
}