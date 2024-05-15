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
    printf("Reversed:\n");
    for (int i = 0; i < size / 2; i++)
    {
        arr[size - 1 - i] = arr[size - 1 - i] + arr[i];
        arr[i] = arr[size - 1 - i] - arr[i];
        arr[size - 1 - i] = arr[size - 1 - i] - arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}