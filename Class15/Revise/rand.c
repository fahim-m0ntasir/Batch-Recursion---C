#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Random number:\t%d\n", rand());
    // }
    // Coin Flipping
    // int a = rand();
    // if (a%2==1)
    // {
    //     printf("Head\n");
    // }
    // if (a%2==0)
    // {
    //     printf("Tail\n");
    // }

    //random word generator
    char random[5];
    for (int i = 0; i < 4; i++)
    {
        random[i] = 'a' + rand()%26;
    }
    random[4]='\0';
    printf("%s", random);
    
    return 0;
}