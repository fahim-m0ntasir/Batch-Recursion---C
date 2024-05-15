#include<stdio.h>


int main()
{
    // table:
    // A   B   A^B 
    // 0   0   0
    // 0   1   1
    // 1   0   1
    // 1   1   0
    // if 1 is in odd number, the output is 1
    // 7    =   0 0 0 0 0 1 1 1
    // 9    =   0 0 0 0 1 0 0 1
    // 7^9  =   0 0 0 0 1 1 1 0 = 14
    // 6    =   0 0 0 0 0 1 1 0
    // 6^9  =   0 0 0 0 1 1 1 1 = 15
    // printf("%d^%d=%d",6,9,6^9 );
    // check if 2 numbers are equal
    // int n, m;
    // scanf("%d %d", &n, &m);
    // if (!(n^m))
    // {
    //     printf("Equal");
    // }
    // printf("%d", n^m);

    // find the unique number:
    int arr[9] = {1,2,3,10, 3,2,1, 50, 50};
    int ans = 0;
    for (int i = 0; i < 9; i++)
    {
        ans ^= arr[i];
    }
    printf("The unique number is: %d\n", ans);
    return 0;
}