#include <stdio.h>
#include<string.h>

struct employeeinfo
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct employeeinfo E42;
    E42.id=42;
    strcpy(E42.name, "Rakib");
    E42.salary=10000;
    printf("%d %s %d\n", E42.id, E42.name, E42.salary);
    
    return 0;
}