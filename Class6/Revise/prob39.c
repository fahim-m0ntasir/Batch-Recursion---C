#include <stdio.h>
int main()
{
    int start, end;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++)
    {
        if (i%9==0)
        {
            printf("%d\t", i);
        }
        
    }
    
    return 0;
}