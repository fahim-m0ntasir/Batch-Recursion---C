#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int **arr;
//     int row, col;
//     printf("Enter the number of rows: ");
//     scanf("%d", &row);
//     arr = (int **)malloc(sizeof(int *) * row);
//     printf("Enter the number of columns: ");
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         arr[i] = (int *)malloc(sizeof(int) * col);
//     }
//     for (int i = 0; i < row; i++)
//     {
//         printf("Enter the elements of row %d: ", i + 1);
//         for (int j = 0; j < col; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t", *(*(arr + i) + j)); // what's happening in this line? see below
//         }
//         printf("\n");
//     }

//     return 0;
// }
int main()
{
    int arr[3][3] = {
        {11, 22, 33},
        {44, 55, 66},
        {77, 88, 99}
    };
    printf("**arr+7 = %d\n", **arr+7); // arr points to the first row(address of the first row), *arr(address of the first element), **arr(first element of the first row)
    printf("*(*arr+4) = %d\n", *(*arr+5)); // *arr(first row), counts from the first and moves on even if the row has ended
    printf("**(arr+1) = %d\n", **(arr+1)); // *(arr+1)(second row)
    printf("*(*(arr+1)+4) = %d\n", *(*(arr+1)+4)); // *(arr+1) secod row, counts from the first and moves on even if the row has ended
}

// arr[i][j] = *(*(arr+i)+j)