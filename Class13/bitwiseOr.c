#include <stdio.h>

#include <string.h>
int main()
{
    // table:
    // A   B   A|B
    // 0   0   0
    // 0   1   1
    // 1   0   1
    // 1   1   1
    // 7    =   0 0 0 0 0 1 1 1
    // 9    =   0 0 0 0 1 0 0 1
    // 7|9  =   0 0 0 0 1 1 1 1 = 15
    // 6    =   0 0 0 0 0 1 1 0
    // 6|9  =   0 0 0 0 1 1 1 1 = 15
    // printf("%d|%d\t=\t%d", 6,9,6|9);

    // change sTrInG to StRiNg
    // char str[10];
    // scanf("%[^\n]", str);
    // for (int i = 0; str[i] != '\0'; i++) {
    //     if (str[i] >= 'a' && str[i] <= 'z') {
    //         str[i] = str[i] & 95;
    //     } else if (str[i] >= 'A' && str[i] <= 'Z') {
    //         str[i] = str[i] |32;
    //     }
    // }
    // printf("%s\n", str);

    // Check if power of 2
    //    64 = 0 1 0 0 0 0 0 0
    //    63 = 0 0 1 1 1 1 1 1
    // 64&63 = 0 0 0 0 0 0 0 0

    // 8  = 0 0 0 0 1 0 0 0
    // 7  = 0 0 0 0 0 1 1 1
    // 8&7= 0 0 0 0 0 0 0 0
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // (num & (num - 1)) ? printf("%d is not a power of 2", num) : printf("%d is a power of 2", num);
    int flag = 1;
    // if (num & (num-1))
    // {
    //     flag = 0;
    //     printf("%d is not a power of 2", num);
    // }
    // else{
    //     flag = 1;
    // }
    int count = 0;
    if (flag == 1)
    {
        int temp = num;
        while(temp){
            if (!(num&1))
            {
                count++;
            }
            else break;
            num = num >> 1;
        }
    }
    printf("%d", count);
    // 0 1 0 0 0 0 0
    


    return 0;
}