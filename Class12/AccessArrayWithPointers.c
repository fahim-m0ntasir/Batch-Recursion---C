#include<stdio.h>


int main()
{
    int x[4], y[4];
    printf("Enter 4 elements of x: ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The %dth element: %d\n", i, x[i]);
    }
    printf("Enter 4 elements of y: ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", y+i);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The %dth element: %d\n", i, *(y+i));
    }
    
    
    return 0;
}