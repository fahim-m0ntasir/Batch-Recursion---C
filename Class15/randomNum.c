#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    time_t t;
    srand((unsigned)time(&t));
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Random Number: %d\n", rand()%6+1); //ludu
    // }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     if (rand()%2 == 0)
    //     {
    //         printf("Head\n");
    //     }
    //     else{
    //         printf("Tails\n");
    //     }
    // }

    // Random word generator
    char word[10];
    for (int i = 0; i < 9; i++)
    {
        word[i] = 'a'+rand()%26;
    }
    word[9] = '\0';
    printf("%s\n", word);
    
    return 0;
}