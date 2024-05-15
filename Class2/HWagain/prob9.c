#include <stdio.h>
int main()
{
    int data;
    scanf("%d", &data);
    printf("%dday%c = %dyear%c %dmonth%c %dday%c ", data,(data>1)?'s':'\0', data/365,(data/365>1)?'s':'\0', (data%365)/30,((data%365)/30>1)?'s':'\0',(data%365)%30, ((data%365)%30>1)?'s':'\0');
    return 0;
}