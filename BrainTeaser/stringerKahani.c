#include<stdio.h>
#include <string.h>

int main()
{
    char a[1000000];
    long long n;
    scanf("%s %lld", a, &n);
    long long count_a = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'a')
        {
            count_a++;
        }
        
    }
    long long ans = (n/strlen(a))*count_a;
    count_a = 0;
    for (int i = 0; i < n%strlen(a); i++)
    {
        if (a[i] == 'a')
        {
            count_a++;
        }
        
    }
    
    ans += count_a;
    printf("%lld", ans);


    return 0;
}