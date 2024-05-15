#include<stdio.h>


int main()
{
    int numbers[10];
    int sum = 0;
    printf("Enter ten numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Number(%d)\t-->\t", i+1);
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }
    int average = sum/10;
    printf("Sum is %d & Average is %d", sum, average);
    
    
    return 0;
}