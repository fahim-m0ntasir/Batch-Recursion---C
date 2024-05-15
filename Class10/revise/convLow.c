#include <stdio.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i]>'A' && str[i]<'Z')
        {
            str[i] -='A'-'a';
        }
        i++;
        
    }
    puts(str);
    
    return 0;
}