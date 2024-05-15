#include <stdio.h>

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10];
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < size1; i++)
    {
        arr2[i] = arr1[i];
    }
    int size2 = sizeof(arr2) / sizeof(int);
    for (int i = 0; i < size2; i++)
    {
        printf("%d\t", arr2[i]);
    }
    
    return 0;
}