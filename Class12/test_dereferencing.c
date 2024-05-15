#include<stdio.h>


int main()
{
    char *str = "Bangladesh";
    printf("%c %c %c %c\n", *str, *(str+1), *(str+2), *(str+3));
    printf("%c %c %c %c\n", str[0], str[1], str[2], str[3]);
    printf("%c %c %c %c\n", 0[str], 1[str], 2[str], 3[str]);
    // Why they all give same outputs?
    printf("%c %c %c %c\n", *str, *str+1, *str+2, *str+3);

    int str1 = 10;
    void *ptr = &str1;
    printf("The address of str1 is %p\n", ptr);
    printf("The address of str1 is %p\n", &str1);
    printf("The value of str1 is %d\n", str1);
    printf("The value of str1 is %d\n", *((int*)ptr)); // typecasting void pointer to int pointer

    float str2 = 10.5;
    ptr = &str2;
    printf("The address of str2 is %p\n", ptr);
    printf("The address of str2 is %p\n", &str2);
    printf("The value of str2 is %f\n", str2);
    printf("The value of str2 is %f\n", *((float*)ptr)); // typecasting void pointer to float pointer
    // So the benefit of void pointer is that we can store any type of data in it, but we have to typecast it to use it
    return 0;
}