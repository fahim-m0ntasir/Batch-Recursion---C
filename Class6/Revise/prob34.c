#include <stdio.h>
int checkprime(int num)
{
    if (num == 1 || num == 2)
    {
        return 1;
    }

    int flag = 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}
int main()
{
    int start, end;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++)
    {
        if (checkprime(i) == 1)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}