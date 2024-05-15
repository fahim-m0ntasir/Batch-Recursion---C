// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int num[2];
//     int *arr[2];
//     for (int row = 0; row < 2; row++)
//     {
//         printf("Enter the number of students in class %d: ", row + 1);
//         scanf("%d", &num[row]);
//         arr[row] = (int *)malloc(num[row] * sizeof(int));
//         printf("Enter the marks of %d students: ", num[row]);
//         for (int col = 0; col < num[row]; col++)
//         {
//             scanf("%d", &arr[row][col]);
//         }
//     }
//     // Sorting:
//     for (int i = 0; i < 2; i++)
//     {
//         for (int x = 0; x < num[i]; x++)
//         {
//             for (int y = x + 1; y < num[i]; y++)
//             {
//                 if (arr[i][x] > arr[i][y])
//                 {
//                     int temp = arr[i][x];
//                     arr[i][x] = arr[i][y];
//                     arr[i][y] = arr[i][x];
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < num[i]; j++)
//         {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Generate the correct version of the above program, change only where necessary.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[2];
    int *arr[2];
    for (int row = 0; row < 2; row++)
    {
        printf("Enter the number of students in class %d: ", row + 1);
        scanf("%d", &num[row]);
        arr[row] = (int *)malloc(num[row] * sizeof(int));
        printf("Enter the marks of %d students: ", num[row]);
        for (int col = 0; col < num[row]; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }
    // Sorting:
    for (int i = 0; i < 2; i++)
    {

        for (int x = 0; x < num[i]; x++)
        {
            for (int y = x + 1; y < num[i]; y++)
            {
                if (arr[i][x] > arr[i][y])
                {
                    int temp = arr[i][x];
                    arr[i][x] = arr[i][y];
                    arr[i][y] = temp;
                }
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < num[i]; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < num[i]; j++)
        {
            printf("%d\t", &arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < num[i]; j++)
        {
            printf("%d+%d=%d\t", i, j, i + j);
        }
        printf("\n");
    }
    free(arr);
    return 0;
}

// where did you change?
// I changed the line 44 and 45.
// why did you change?
// I changed because the line 44 and 45 are not correct.