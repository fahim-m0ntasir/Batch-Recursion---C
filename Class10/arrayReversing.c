#include<stdio.h>


int main()
{
    int arr1[] = {1,2,3,4,6,7};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    // for (int i = 0, temp; i < size1/2; i++)
    // {
    //     temp = arr1[i];
    //    arr1[i] = arr1[size1 - i - 1];
    //    arr1[size1 - i - 1] = temp;
    // }

    for (int i = 0, j = size1-1, temp; i < size1/2; i++, j--)
    {
        temp = arr1[i];
        arr1[i] = arr1[j];
        arr1[j] = temp;
    }
    
    
    for (int i = 0; i < size1; i++)
    {
        printf("%d\t",arr1[i]);
    }


    
    return 0;
}