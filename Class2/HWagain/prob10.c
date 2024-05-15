#include <stdio.h>
int main()
{
    int sec;
    scanf("%d", &sec);
    printf("%dsecond%c = %dhour%c %dminute%c %dsecond%c", sec, (sec>1)?'s':'\0', sec/3600, (sec/3600>1)?'s':'\0', (sec%3600)/60, ((sec%3600)/60>1)?'s':'\0', (sec%3600)%60, ((sec%3600)%60>1)?'s':'\0');
    return 0;
}