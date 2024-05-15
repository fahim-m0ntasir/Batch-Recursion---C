#include<stdio.h>


int main()
{
    int num, is_found = 0;
    printf("Enter the number\t-->\t");
    scanf("%d", &num);
    printf("%d", num);
    for (int i = 1; i <= num; i++)
    {
        if (num%i == 0)
        {
            printf("\t=\t%d\tx\t%d\n", i, num/i);

        }
        
    }
    

    
    return 0;
}