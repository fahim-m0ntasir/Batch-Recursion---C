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
    int key = 24;
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            printf("Key is at index %d\n", i);
        }
        
    }
    
    return 0;
}