#include<stdio.h>


int main()
{
    char character = 'e';
    switch (character)
    {
    case 'a':
        printf("You didn't put the right option\n");
        break;
    
    case 'b':
        printf("You didn't put the right option\n");
        // break;
    
    case 'c':
        printf("You are right\n");
        break;
    
    default:
        printf("Try again\n");
        break;
    }
    return 0;
}