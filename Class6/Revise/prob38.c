#include <stdio.h>

int rev_num(int num){
    int temp = num;
    int revnum = 0;
    while (temp)
    {
        revnum = revnum*10+temp%10;
        temp /=10;
    }
    return revnum;
}
int main()
{
    int num;
    scanf("%d", &num);
if (rev_num(num)==num)
{
    printf("Yes");
}
else{
    printf("No");
}
    return 0;
}