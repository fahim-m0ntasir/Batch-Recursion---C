#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("test.txt", "w");
    for (int i = 0; i < 1000; i++)
    {
        fprintf(fp, "%d\n", rand()%1000);
    }
    
    return 0;
}