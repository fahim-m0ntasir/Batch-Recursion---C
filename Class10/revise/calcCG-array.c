#include <stdio.h>
int main()
{
    int howmanysem;
    scanf("%d", &howmanysem);
    float cgPerYear[howmanysem];
    int credit[howmanysem];
    printf("Enter CGPA of each semester:\n");
    for (int i = 0; i < howmanysem; i++)
    {
        scanf("%f", cgPerYear+i);
    }
    printf("Enter credits of corresponding semester:\n");
    for (int i = 0; i < howmanysem; i++)
    {
        scanf("%d", credit+i);
    }
    float cg = 0, total_credit = 0;
    for (int i = 0; i < howmanysem; i++)
    {
        cg += cgPerYear[i]*credit[i];
        total_credit+=credit[i];
    }
    cg /=total_credit;
    printf("Average CG =\t%f",cg );

    

    return 0;
}