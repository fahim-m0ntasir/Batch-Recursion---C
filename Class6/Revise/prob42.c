#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int temp1, temp2;
    if (num1>num2)
    {
temp1 = num2;
temp2 = num1;
    }
   else  if (num1<num2)
    {
temp1 = num1;
temp2 = num2;
    }
    while (temp2%temp1!=0)
    {
        temp1=temp2%temp1;
    }
    printf("%d", temp1);
    
    
    
    return 0;
}