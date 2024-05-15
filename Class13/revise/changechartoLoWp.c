#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    gets(str);
    int i = 0;
    while (str[i] != '\0')
    {
        //to transform from up to low
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i]| 32; 
        }

        //to transform from low to up;
        else if (str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i]&95;
        }
        
            i++;
    }
printf("%s", str);

    // 01000010 B
    // 01100010 b
    return 0;
}