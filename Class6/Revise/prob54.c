#include <stdio.h>
#include<math.h>
int OctToDec(int num){
    int dec = 0, n=0;
    while (num != 0)
    {
        dec = dec + (num%10)*pow(8, n);
        n++;
        num /= 10;
    }
    return dec;
    
}
int DecToBin(int num)
{
    int bin = 0, temp = num;
    int n = 0;
    while (temp != 0)
    {
        bin = (temp % 2) * pow(10, n) + bin;
        temp /= 2;
        n++;
    }
    return bin;
}
int main()
{
    printf("%d",DecToBin(OctToDec(57)));
    return 0;
}