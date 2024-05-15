#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int subtract(int a,int b)
{
    return a-b;
}
int sum_of_triplet(int a, int b, int c){
    return a+b+c;
}

int main()
{
    int n1,n2,n3;
    n1=10;
    n2=20;
    n3=30;
    int (*fptr)(int,int);
    int (*fptr1)(int, int, int);
    fptr=&add;
    fptr1=&sum_of_triplet;
    printf("The address of add function is %p\n",fptr);
    printf("The address of sum_of_triplet function is %p\n",fptr1);
    printf("The sum of %d and %d is %d\n",n1,n2,fptr(n1,n2));
    printf("The sum of %d, %d and %d is %d\n",n1,n2,n3,fptr1(n1,n2,n3));
    fptr=&subtract;
    printf("The substraction of %d and %d is %d\n",n1,n2,fptr(n1,n2));
    return 0;
}