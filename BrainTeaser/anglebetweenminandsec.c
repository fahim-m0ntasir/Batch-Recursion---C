#include <stdio.h>

int main()
{
    int H, M;
    scanf("%d %d", &H, &M);
    float h_angle, m_angle;
    // My approach
    h_angle = (float)H * 30 + (float)M * .5;
    m_angle = (float)M * 6;
    float angle_between = (h_angle > m_angle) ? h_angle - m_angle : m_angle - h_angle;
    if (angle_between > 180)
    {
        angle_between =360- angle_between ;
    }

    printf("%f %f\n", h_angle, m_angle);
    printf("%.7f\n", angle_between);
    // vai's approach
    float angle_between1 = (11.0 / 2) * M - 30 * H;
    if (angle_between1 < 0)
    {
        angle_between1 *= -1;
    }
    if (angle_between1 > 180)
    {
        angle_between1 = 360-angle_between1;
    }
    printf("%.7f", angle_between1);
    return 0;
}