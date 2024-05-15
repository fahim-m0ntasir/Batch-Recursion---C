#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[]= "high_score.txt";
    fp= fopen(filename, "a");
    char line[]="A quick brown fox jumps over the lazy dog";
    fprintf(fp, line);
    fclose(fp);
    return 0;
}