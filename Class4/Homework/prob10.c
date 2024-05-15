#include <stdio.h>

int main()
{
    int temperature;
    printf("What's todays temperature?\t-->\t");
    scanf("%d", &temperature);
    if (temperature < 0)
    {
        printf("Freezing Weather");
    }
    else if (temperature >= 0 && temperature < 10)
    {
        printf("Very Cold Weather");
    }
    else if (temperature >= 10 && temperature < 20)
    {
        printf("Cold Weather");
    }
    else if (temperature >= 20 && temperature < 30)
    {
        printf("Normal Weather");
    }
    else if (temperature >= 30 && temperature < 40)
    {
        printf("Hot Weather");
    }
    else
    {
        printf("Very Hot Weather");
    }

    return 0;
}