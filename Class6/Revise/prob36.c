#include <stdio.h>
void pattern(int line)
{
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= line - i; j++)
        {
            printf(" ");
        }
        for (int j = 1, k = 0; j <= 2 * i - 1; j++)
        {
            if (j <= i)
            {
                k++;
            }

            else if (j > i / 2)
            {
                k--;
            }
            printf("%d", k);
        }
    printf("\n");
    }
}
int main()
{
    pattern(4);

    return 0;
}