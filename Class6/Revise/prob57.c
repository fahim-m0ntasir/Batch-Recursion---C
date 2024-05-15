#include <stdio.h>
#include<string.h>
int strlent(char *arr){
    int size = 0, i = 0;
    while(arr[i]!='\0')
    {
        size++;
        i++;
    }
    return size;
    
}
int main()
{
    char str[100];
    // fgets(str, 100, stdin);
    gets(str);
    int len = strlent(str); // or can use the strlen from <string.h>
    char temp;
    for (int i= 0, j=len-1; i<len/2 ; i++, j--)
    {
        temp = str[i];
        str[i]=str[j];
        str[j]= temp;
    }
    puts(str);
    strrev(str);
    puts(str);


    return 0;
}