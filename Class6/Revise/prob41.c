#include <stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d", &num);
    int bin=0, temp = num;
    int n = 0;
    while (temp!=0)
    {
        bin = (temp%2)*pow(10,n)+bin;
        temp /=2;
        n++;
    }
    printf("%d = 0b%d", num, bin);

    return 0;
}