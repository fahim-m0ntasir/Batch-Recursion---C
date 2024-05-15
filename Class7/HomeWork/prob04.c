#include<stdio.h>

int checkifodd(int num){
    if (num %2 == 0)
    {
        return 0;
    }
    else return 1;
    
}
int main()
{
    int num = 5;
    if (checkifodd(num) == 1)
    {
        printf("The Number Is ODD");
    }
    else{
        printf("The Number is EVEN");
    }
    return 0;
}