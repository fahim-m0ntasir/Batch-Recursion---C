// it's defining multiple constants at once, but can only define int
#include<stdio.h>

// enum COLOR {red, blue, green}; // 0 1, 2 ....
enum COLOR {red = 40, blue = 60, green = 80};
int main()
{
    printf("%d %d %d", red, blue, green);
    return 0;
}