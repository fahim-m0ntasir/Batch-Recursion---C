#include<stdio.h>
#include<time.h>

int main()
{
    clock_t start, end;
    start = clock();
    for (int i = 0; i < 1000000000; i++)
    {
        5+6;
    }
    end = clock();
    double elasped_time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("%lf", elasped_time);
    return 0;
}