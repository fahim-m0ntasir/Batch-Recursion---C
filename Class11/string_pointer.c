#include<stdio.h>


int main()
{
    // char str[100];
    // gets(str);
    // printf("%s\n", str);
    // char *str1;
    // scanf("%s", str1);
    // printf("%s\n", str1);
// declare a string using pointer
    char *str2 = "I am Fahim";
    printf("%s\n", str2);
    // what will it's size be?
    printf("%d\n", sizeof(str2));

    return 0;
}
