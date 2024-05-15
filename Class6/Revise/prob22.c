#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num;
    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            num = 1;
        }
        else{
            num = 0;
        }
        

        for (int j = 1; j <= i; j++)
        {
            printf("%d", num);
            if (num ==1)
            {
                num = 0;
            }
            else if (num ==0)
            {
                num = 1;
            }
            
        }
        printf("\n");
    }
    
    return 0;
}