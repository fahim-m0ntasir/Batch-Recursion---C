#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of Students:\t");
    scanf("%d", &n);
    int *arr;
    // arr= (int*)malloc(sizeof(int)*n);
    arr = (int*)calloc(n, sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", arr+i);
    // }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr+i));
    }
    
    free(arr);
     for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr+i));
    }
    return 0;
}