#include <stdio.h>
#include<math.h>
int main()
{
    int dec;
    scanf("%d", &dec);
    int temp = dec;
    int oct = 0, i=0;
    while (temp != 0 )
    { 
        oct = oct+(temp%8)*pow(10,i);
        temp = temp/8;
        i++;
    }
    printf("%d", oct);
    return 0;
}