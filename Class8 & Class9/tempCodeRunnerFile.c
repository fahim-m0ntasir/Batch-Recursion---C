#include<stdio.h>
int sum(int n){
    return ++n;
}

int main()
{
    printf("%d", sum(5));
    return 0;
}