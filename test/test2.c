#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N >= 1 && N <= 6)
    {
        int S[N][3];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &S[i][j]);
            }
        }
        int max_2[N];
        for (int r = 0; r < N; r++)
        {

            for (int i = 0; i < 3; i++)
            {
                for (int j = i + 1; j < 3; j++)
                {
                    if (S[r][i] > S[r][j])
                    {
                        int temp = S[r][i];
                        S[r][i] = S[r][j];
                        S[r][j] = temp;
                    }
                }
            }
            max_2[r] = S[r][1];
            printf("%d\n", max_2[r]);
        }
    }

    return 0;
}