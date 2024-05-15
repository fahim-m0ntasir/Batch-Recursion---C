#include <stdio.h>
int pattern(int line)
{

    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= line - i; j++)
        {
            printf("  ");
        }
        for (int j = 1, a = 'A'; j <= 2 * i - 1; j++)
        {
            printf("%c ", (j <= i) ? a++ : a--);
        }

        printf("\n");
    }
}
int main()
{
    pattern(25);
    return 0;
}