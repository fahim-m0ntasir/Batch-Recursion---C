#include <stdio.h>
int main()
{
    int term, total, codiff;
    scanf("%d %d %d", &term, &total, &codiff);
    int sum = 0;
    for (int i = 1; i <= total; i++)
    {
        sum += term;
         printf("%d", term);
         term += codiff;
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