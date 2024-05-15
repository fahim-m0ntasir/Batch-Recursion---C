#include <stdio.h>
int inputarr(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Element(%d) : \n", i + 1);
        scanf("%d", array + i);
    }
}
int printarr(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Element(%d) --> %d\n", i + 1, *(array + i));
    }
}
int checkarr(int *array, int size)
{
    int bigger, biggerfound = 0;
    int num1;

    int j = 0;
    while ( j < size)
    {
        num1 = *(array + j); //9

        for (int i = 0; i < size; i++)
        {
            if ((double)num1 / *(array + i) >= 1.0)
            {
                biggerfound = 1;
                bigger = num1;
            }
            else
            {
                biggerfound = 0;
            }
            
        }
        if (biggerfound == 1)
        {
            j = j;
        }
        else
        {
            j++;
        }
    }
    return bigger;
}
int main()
{
    int arr[5] = {9,5,3,7,1};
    // inputarr(arr, 5);
    // printarr(arr, 5);
    printf("Biggest number %d", checkarr(arr, 5));

    return 0;
}