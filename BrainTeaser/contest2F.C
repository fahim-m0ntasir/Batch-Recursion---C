#include<stdio.h>
#include<math.h>

int main()
{
    int n,m, a;
    scanf("%d %d %d", &n, &m, &a);
    long long int number_of_flagstone = (long long)ceil((double)n/a)*(long long)ceil((double)m/a);
    Printf("%lli", number_of_flagstone);
    return 0;
}