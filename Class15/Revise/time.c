#include <stdio.h>
#include <time.h>
int main()
{
    clock_t start, end;
    start = clock();
    unsigned long long int a = 0;
    for (unsigned long int i = 0; i < 10000000000; i++)
    {
        a++;
    }
    end = clock();
    double elasped_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("time spent to run this program: %lf\n", elasped_time);

    return 0;
}