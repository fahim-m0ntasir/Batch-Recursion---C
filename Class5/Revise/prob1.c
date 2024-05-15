#include <stdio.h>
#include <math.h>
int main()
{
    // int n;
    // scanf("%d", &n);
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + pow(2, i);
    // }
    // printf("%d", sum);
    // return 0;

    // int c;
    // scanf("%d", &c);
    // int nums[c];
    // for (int i = 0; i < c; i++)
    // {
    //     scanf("%d", nums+i);
    // }
    // int oddcount =0, evencount=0;
    // for (int i = 0; i < c; i++)
    // {
    //     if (nums[i]%2 ==0)
    //     {
    //         evencount++;
    //     }
    //     else{
    //         oddcount++;
    //     }
        
    // }
    // printf("%d %d", oddcount, evencount);
    // int num, fact = 1;
    // scanf("%d", &num);
    // for (int  i = 1; i <= num; i++)
    // {
    //     fact = fact*i;
    // }
    
    
    // printf("%d", fact);

    int num;
    scanf("%d", &num);
    int temp = num;
    int digit, sum = 0;
    
    while(temp){
        digit = temp%10;
        temp = temp/10;
        sum = sum + digit*digit;
    }
    
printf("Beautiful Value = %d", sum);
    
    
}