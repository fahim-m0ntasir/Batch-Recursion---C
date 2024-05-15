#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n= 5;
    int *arr;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    // arr = (int*)malloc(sizeof(int)*n);
    arr = (int*)calloc(n,sizeof(int)); // also sets initial value to 0

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    free(arr);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}