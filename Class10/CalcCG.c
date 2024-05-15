#include <stdio.h>

int main()
{

    // Single Person:
    // float cgperyear[4] = {2.6, 3.5, 3.3, 3.6};
    // float crhour[4] = {23,16,24,32};
    // float cg = 0, divider = 0;

    // for (int i = 0; i < 4; i++)
    // {
    //     cg = cg + cgperyear[i] * crhour[i];
    //     divider = divider+crhour[i];

    // }
    // cg = cg/divider;
    // printf("%f\t", cg);

    // Multi-Person:
    double cg1st[] = {3.5, 3.7, 3.6, 3.2, 3.4};
    double cg2nd[] = {3.4, 3.4, 3.3, 3.2, 3.7};
    double cg3rd[] = {3.2, 3.8, 3.9, 3.1, 3.6};
    double cg4th[] = {3.5, 3.2, 3.1, 3.0, 3.6};
    double craditperyear[] = {24, 30, 44, 20};
    int total_credit = 0;
    for (int i = 0; i < sizeof(craditperyear) / sizeof(craditperyear[0]); i++)
    {
        total_credit += craditperyear[i];
    }
    for (int person = 0; person < 5; person++)
    {
        double summation = 0, cg = 0;
        for (int year = 0; year < 4; year++)
        {
            summation += cg1st[person] * craditperyear[year];
        }
        cg = summation / total_credit;
        printf("CGPA of Person-%d:\t%lf\n", person, cg);
    }

    return 0;
}