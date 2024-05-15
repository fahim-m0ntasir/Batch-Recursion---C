#include<stdio.h>
int checkprime(int num){
    int check = 1;
    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
           check = 0;
           break;

        }
        else{
            check = 1;
        }
        
    }
    if (num == 1)
    {
        return 0;
    }
    else return check;
    

    
}


int main()
{
    int num;
    printf("Enter a number:\t");
    scanf("%d", &num);
    if (checkprime(num) == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else{
        printf("%d is a  not prime number\n", num);

    }
    
    return 0;
}