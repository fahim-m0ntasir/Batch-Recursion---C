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
    int num;
    scanf("%d", &num);
    if (checkprime(num))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}