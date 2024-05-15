#include<stdio.h>
#include<string.h>

struct info
{
    char name[10];
    // int birth_day;
    // int birth_month;
    // int birth_year;
    int birth[3];
    char number[12];
};

int main(int argc, char const *argv[])
{ 
    //normal way
    // char name[]= "Fahim";
    // char dateOfBirth[] = "31/5/2005";
    // char number[] = "01811464785";
    // printf("My name is %s, my date of birth: %s. Call me @%s", name, dateOfBirth, number);
    //Using structures
    struct info myself = {"Fahim", {31,5,2005}, "01811464785"};
    printf("I am %s\n", myself.name);
    printf("I was born in %d/%d/%d.\n", myself.birth[0], myself.birth[1],myself.birth[2]);
    printf("Call me @ %s", myself.number);
    

    return 0;
}
