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
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num/2; i++)
    {
        if (checkprime(i))
        {
            if (checkprime(num-i))
            {
                printf("%d = %d+%d\n", num, i, num-i);
            }
            
        }
        
    }
    
    return 0;
}