#include <stdio.h>
#include<math.h>
int digitcount(int num){
    int count=0;
    while (num!=0)
    {
        num /=10;
        count++;
    }
    
    return count;
}
int checkarm(int n){
    int num = n;
    int sum = 0, size = digitcount(n);
    while (num!=0)
    {
        sum +=pow(num%10, size);
        num /=10;
    }
    if (n==sum)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int main()
{
    int num;
    scanf("%d", &num);
    if (checkarm(num)==1)      
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    

    return 0;
}