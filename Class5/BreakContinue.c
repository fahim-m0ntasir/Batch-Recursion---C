#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++)
    {
        printf("%d loop", i);
        if (i == 50)
        {
            continue; // starts the loop from the start without executing below code
            break; // breaks the loop
            

            printf("in of the loop");
        }
        printf("out of the loop");
    }

    return 0;
}