#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int substraction(int a,int b)
{
    return a-b;
}
int multiplication(int a,int b)
{
    return a*b;
}
int operate(int (*op)(int, int), int n1, int n2){
    return op(n1, n2);
}

int main()
{
    int num1 = 10, num2 = 5;
    printf("Result of add: %d\n", operate(&add, num1, num2));
    printf("Result of substration: %d\n", operate(&substraction, num1, num2));

    //so a function's address can also be stored inside a pointer and use it
    return 0;
}