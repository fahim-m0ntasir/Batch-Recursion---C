#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int p = 0; p < n - i; p++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}