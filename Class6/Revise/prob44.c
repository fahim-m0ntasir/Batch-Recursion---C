#include <stdio.h>
int checkprime(int num)
{
    if (num == 1 || num == 2)
        return 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int primeflag = 0, flag = 0, lcm = 1;
    for (int i = 2; flag = 0; (primeflag == 1) ?: i++)
    {
        if (checkprime(i))
            for (int j = 0; j < size; j++)
            {
                {
                    if (arr[j] % i == 0)
                    {
                        arr[j] /= i;
                        lcm *= i;
                        primeflag = 1;
                    }
                    else
                    {
                        primeflag = 0;
                    }
                }
            }
    }
    printf("lcm : %d", lcm);

    return 0;
}