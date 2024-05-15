#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[]="test_file.c";
    fp = fopen(filename, "r");
    int t;
    fscanf(fp, "%d", &t);
    while (t--)
    {
        int a, b;
        fscanf(fp, "%d %d", &a, &b);
        printf("%d %d\n", a, b);
    }
    
    return 0;
}