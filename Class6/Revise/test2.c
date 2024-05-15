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
    int num = 20;
    int prime[20]={0}, power[20]={1};
    int powerflag = 1;
    for (int i = 2, j=0; i<=num/2; (powerflag == 0) ?: i++)
    {
        if (checkprime(i)==1)
        {
            if (num%i==0)
            {
                num/=i;
                if (prime[j] != i)
                {
                    prime[j] = i;
                    j++;
                }
                else if (prime[j] == i)
                {
                    power[j]++;
                }
                powerflag = 1;
                
            }
            else
            {
                powerflag = 0;
            }
            
            
        }
        
    }
    for (int i = 0; prime[i] !=0; i++)
    {
        printf("(%d %d)", prime[i], power[i]);
    }
    

    return 0;
}