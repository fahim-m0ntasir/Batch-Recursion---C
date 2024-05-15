#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    int key = 49;
    int left = 0, right = size - 1, flag = 0;
    while (left <= right)
    {
       int  mid = (left + right) / 2;
        if (key == arr[mid])
        {
            flag = 1;
            break;
        }
        else if (key > arr[mid])
        {
            left = mid + 1;
        }
        else if (key < arr[mid])
        {
            right = mid - 1;
        }
    }
    if (flag == 1)
    {
        printf("Found\n");
    }
    else if (flag == 0)
    {
        printf("Not found\n");
    }
    return 0;
}