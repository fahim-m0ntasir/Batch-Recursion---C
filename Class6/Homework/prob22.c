#include<stdio.h>


int main()
{
    int line;
    int num=1;
    printf("Lines?\t");
    scanf("%d", &line);
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            if (i%2== 0 && j == 1)
            {
                num = 0;
            }
            else if(i%2 != 0 && j == 1)
            {
                num = 1;
            }
            
            
            
            printf("%d ", num);
            if (num == 1)
            {
                num = 0;
            }
            else if(num == 0){
                num =1;
            }
            
            
            
        }
        printf("\n");
    }
    
    return 0;
}