#include<stdio.h>


int main()
{
    FILE *fp;
    // char filename[] = "input.txt";
    // fp=fopen(filename, "a"); // w --> will overwrite, a --> will append(append means add at the end), r --> read
    // int highscore = 100;
    // fprintf(fp, "HIGHSCORE = %d\n", highscore);
    // fclose(fp);// closing the file is important to save the changes
    // fp=fopen(filename, "a");
    // char player[] = "Henry";
    // fprintf(fp, "PLAYER = %s\n", player);
    // fclose(fp);
    char filename[] = "test.txt";
    char filename2[] = "output.txt";
    fp=fopen(filename, "r");
    int n;
    int sum= 0;
    while (fscanf(fp, "%d", &n)!=EOF)
    {
        sum += n;
    }
    printf("%d", sum);
    fclose(fp);
    fp=fopen(filename2, "w");
    fprintf(fp, "%d", sum);
    fclose(fp);
    

    return 0;
}