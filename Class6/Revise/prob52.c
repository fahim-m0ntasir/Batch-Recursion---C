#include <stdio.h>
int main()
{
    int term, total, cora;
    scanf("%d %d %d", &term, &total, &cora);
    int sum = 0;
    for (int i = 1; i <= total; i++)
    {
        sum += term;
         printf("%d", term);
         term *= cora;
         if (i< total)
         {
            printf(" +");
         }
         else{
            printf(" =");
         }
         

    }
    printf("%d", sum);
    
    return 0;
}