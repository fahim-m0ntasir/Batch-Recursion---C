#include <stdio.h>
#include <string.h>

int find_length(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {

        i++;
    }
    return i;
}
int string_compare()
{
}

int main()
{
    //     char name[] = "I am Fahim";
    //     char name1[100] = {'I', ' ', 'a', 'm',' ', 'f', 'a', 'h', 'i', 'm', '\0'};
    //     printf("%s\n", name1);
    //     for (int i = 0; name[i] != '\0'; i++)
    //     {
    //         printf("%c", name[i]);
    //     }
    //     printf("\n");
    //     // How to get input:
    //     char str[1000];
    //     char str1[10];
    //     // scanf("%s", str); // scanf can't store the input after a space
    // Update::: scanf(:"%^\n", str); can store a line
    //     // printf("%s\n", str);
    //     gets(str1);// so to store a whole sentence! we use gets()
    //     printf("%s\n", str1);
    //    printf("%d\n", strlen(str1));

    // Convert string to STRING:
    // char str[100];
    // gets(str);
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] += 'A' - 'a';
    //     }
    // }
    // printf("%s", str);

    // Convert STRING to string:
    // char str[100];
    // gets(str);
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         str[i] += 'a' - 'A';
    //     }
    // }
    // printf("%s", str);

    // String Concatanation:
    //  char str1[100];
    //  gets(str1);
    //  char str2[100];
    //  gets(str2);

    // int size1 = strlen(str1);
    // int size2 = strlen(str2);
    // int concatedsize = size1+size2+1;
    // char concated[concatedsize];
    //     int i = 0;
    //     int j = 0;
    //     while (j < size1)
    //     {
    //         concated[i] = str1[j];
    //         j++;
    //         i++;
    //     }
    //     j = 0;
    //     while (j < size2)
    //     {
    //         concated[i] = str2[j];
    //         j++;
    //         i++;
    //     }
    // concated[i] = '\0';
    // printf("%s", concated);

    // char str1[100];
    // // gets(str1);
    // scanf("%s", str1);
    // char str2[100];
    // scanf("%s", str2);
    // // gets(str2);
    // int size1 = strlen(str1);
    // int size2 = strlen(str2);
    // printf("%d %d\n", size1, size2);
    // char concatedstr[size1+size2];
    // int i = 0;
    // for (int j = 0; str1[j] != '\0'; j++)
    // {
    //     concatedstr[i] = str1[j];
    //     i++;
    // }
    // for (int j = 0; str2[j] != '\0'; j++)
    // {
    //     concatedstr[i] = str2[j];
    //     i++;
    // }
    // concatedstr[i]= '\0';

    // printf("%s\n", concatedstr);
    // printf("%d\n", strlen(concatedstr));
    // for (int i = 0; concatedstr[i] != '\0'; i++)
    // {
    //     printf("%c ==> %d\n", concatedstr[i], concatedstr[i]);
    // }

    // String Compare:


    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);

    // don't know why this code is working :( but it works perfectly 
    // int flag = 1;
    // for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    // {
    //     if (str1[i] != str2[i])
    //     {
    //         flag = 0;
    //         break;
    //     }
    // }
    // if (flag == 1)
    // {
    //     printf("Strings are the same\n");
    // }
    // else if (flag == 0)
    // {
    //     printf("Strings are not the same\n");
    // }


// here's the code from the class:
int flag = 0;
for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
{
    if (str1[i] > str2[i])
    {
        flag = 1;
        break;
    }
    else if (str1[i] < str2[i])
    {
        flag = -1;
        break;
    }
    
}
if (!flag)
{
    if (find_length(str1) > find_length(str2))
    {
        flag = 1;
    }
    else if (find_length(str1) < find_length(str2))
    {
        flag = -1;
    }
    
}
printf("%d", flag);


    return 0;
}