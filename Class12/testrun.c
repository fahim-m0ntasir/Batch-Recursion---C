
#include <stdio.h>
#include<string.h>

int main (){
int x=20;
int y= 10;
int* p = &x;
*p = y;
printf("The value of *p is:%d\n",*p);
p= &y;
printf("The value of *p is:%d\n",(*p)++);
}