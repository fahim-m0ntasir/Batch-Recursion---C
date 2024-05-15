#include <stdio.h>
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
float addition(int (*func)(int, int), int b, int c){
    return func(b,c);
}
int main()
{
    int (*func1)(int, int);
    float (*func2)(int, int, int);
    func1 = &add;
    printf("%d\n",func1(3,4));
    func1 = &sub;
    printf("%d\n",func1(3,4));
    printf("%f\n",addition(&add,3,4));
    

    return 0;
}