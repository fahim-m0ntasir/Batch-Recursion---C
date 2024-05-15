#include<stdio.h>


int main()
{
    //char and int are kind of inter-changable
    //but it's ideal to follow the typecasting rules to make the code more understandable
    char a = 'A';
    for (char a = 65; a < 91; (int)a++)
    {
        printf("%c %c\n", a, (int)a+32);
    }
    
    
    return 0;
}