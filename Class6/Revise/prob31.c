// #include <stdio.h>
// void star(int line)
// {
//     for (int i = 1; i <= line; i++)
//     {
//         for (int s = 1; s <= line - i+((line%2 == 0)? 0: 1); s++)
//         {
//             printf(" ");
//         }
//         for (int st = 1; st <= 2*i-1; st++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// void rev_star(int line)
// {
//     for (int i = line; i > 0; i--)
//     {
//         for (int s = 1; s <= line - i; s++)
//         {
//             printf(" ");
//         }
//         for (int st = 1; st <= 2*i-1; st++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// void combined_star(int line){
//     if (line%2 == 0)
//     {
//         star(line/2);
//         rev_star(line/2);
//     }
//     else
//     {
//         star((line/2));
//         // printf(" ");
//         rev_star((line/2)+1);
//     }

// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     combined_star(n);
//     return 0;
// }

// #include <stdio.h> // Include the standard input/output header file.

// int main()
// {
//     int i, j, r; // Declare variables for loop control and the number of rows.

//     // Prompt the user to input the number of rows.
//     printf("Input number of rows (half of the diamond): ");
//     scanf("%d", &r);

//     for (i = 0; i <= r; i++)
//     {

//         for (j = 1; j <= r - i; j++)
//             printf(" ");

//         for (j = 1; j <= 2 * i - 1; j++)
//             printf("*");

//         printf("\n");
//     }

//     for (i = r - 1; i >= 1; i--)
//     {

//         for (j = 1; j <= r - i; j++)
//             printf(" ");

//         for (j = 1; j <= 2 * i - 1; j++)
//             printf("*");

//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
void pattern(int row){
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}
void rev_pattern(int row){
    for (int i = row; i >=1 ; i--)
    {
        for (int j = 1; j <= row-i+1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}
int main()
{
    int row;
    scanf("%d", &row);
    pattern(row);
    rev_pattern(row-1);
    

    
    return 0;
}