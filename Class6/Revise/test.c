#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size], reminder[size];
    int hcf = 1;

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("HCF of ");
    for (int i = 0; i < size; i++)
    {
        printf("%d%c", arr[i], (i < size - 1) ? ',' : ':');
    }

    for (int i = 1, flag = 1; i <= arr[1] / 2; i++)
    {
        for (int j = 0; j < size; j++)
        {
            reminder[j] = arr[j] % i;
        }

        for (int j = 0; j < size - 1; j++)
        {
            if (flag == 1 && (reminder[j] || reminder[j + 1] == 0))
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            hcf = i;
        }
    }

    printf("%d", hcf);

    return 0;
}
