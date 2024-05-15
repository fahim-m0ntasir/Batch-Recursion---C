#include <stdio.h>

int main()
{
    int m_math, m_phy, m_che;
    printf("Marks in Mathematics:\t");
    scanf("%d", &m_math);
    printf("Marks in Physics:\t");
    scanf("%d", &m_phy);
    printf("Marks in Chemistry:\t");
    scanf("%d", &m_che);
    if ((m_math + m_phy + m_che >= 190 && m_math >= 65 && m_phy >= 55) || m_math + m_phy >= 140)
    {
        printf("The candidate is eligible for admission.");
    }
    else
    {
        printf("The candidate is not eligible of admission");
    }

    return 0;
}