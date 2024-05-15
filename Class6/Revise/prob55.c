#include <stdio.h>
#include <string.h>
int main()
{
    int dec;
    scanf("%d", &dec);
    char hex[10];
    int temp, i = 0;
    while (dec != 0)
    {
        temp = dec % 16;
        dec /= 16;
        hex[i] = (temp < 10) ? '0' + temp : 'A' + temp - 10;
        i++;
    }
    // printf("%d", i);
    for (int j = 0,k = i-1 ; j<i/2;j++, k--)
    {
        temp = hex[j];
        hex[j] = hex[k];
        hex[k] = temp;
    }

    hex[i + 1] = '\0';
    printf("%s", hex);

    return 0;
}