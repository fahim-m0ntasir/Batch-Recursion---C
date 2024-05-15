temp = i;
        for (int j = digitcount; j > 0; j--)
        {
            digit = temp/((int)pow(10, j - 1));
            temp = temp %((int)pow(10, j - 1));
            sum = sum + pow(digit, digitcount);
        }
        if (sum == i)
        {
            printf("%d\t", i);
        }