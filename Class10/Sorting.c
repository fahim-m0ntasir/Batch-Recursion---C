

#include <stdio.h>

int main()
{
    int marks[] = {342, 34, 212, 675, 342, 876, 323, 46, 12, 36};

    int size = sizeof(marks) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (marks[i] > marks[j])
            {
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", marks[i]);
    }

    return 0;
}