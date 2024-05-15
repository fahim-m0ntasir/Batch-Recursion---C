#include <stdio.h>
int main()
{
    float spkm;
    scanf("%f", &spkm);
    float spm = spkm/3.6;
    printf("%.3fkm = %.3fm", spkm, spm);
    return 0;
}