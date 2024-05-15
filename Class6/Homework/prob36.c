#include <stdio.h>

int main()
{
    int lines = 3, num = 0;
    for (int i = 1; i <= lines; i++)
    {
        for (int space = 1; space <= lines - i; space++)
        {
            printf(" ");
        }
        
        num = 0;
        for (int j = 1; j <= 2 * i - 1; j++)
        {

            if (j <= i)
            {
                num++;
            }
            else if (j > i)
            {
                num--;
            }

            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}