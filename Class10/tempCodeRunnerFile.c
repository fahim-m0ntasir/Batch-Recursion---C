 char str1[100];
    gets(str1);
    char str2[100];
    gets(str2);


    int size1 = strlen(str1);
    int size2 = strlen(str2);
    int concatedsize = size1+size2+1;
    char concated[concatedsize];
        int i;
        int j = 0;
        while (j < size1)
        {
            concated[i] = str1[j];
            j++;
            i++;
        }
        j = 0;
        while (j < size2)
        {
            concated[i] = str2[j];
            j++;
            i++;
        }
    printf("%s", concated);
