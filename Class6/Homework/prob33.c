#include <stdio.h>

int main() {
    int num_rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &num_rows);

    for (int i = 1; i <= num_rows; i++) {
        // Print spaces to center the triangle
        for (int j = 1; j <= num_rows - i; j++) {
            printf(" ");
        }

        int num = 1;
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
