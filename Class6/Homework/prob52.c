#include<stdio.h>
#include<math.h>


int main()
{
    int a, n, r;
    printf("(a, n, r) = ?\t");
    scanf("%d %d %d", &a, &n, &r);
    int num = a, sum = 0;
    for (int i = 0; i < n; i++)
    {
        num = a * pow(r, i);
        sum = sum + num;
        printf("%d ", num);
        if (i+1 < n)
        {
            printf("+ ");
        }
        
    }
    printf("= %d", sum);
    
    return 0;
}