int **arr;
    arr = (int **)malloc(sizeof(int *) * 3);
    for (int i = 0; i < 3; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * 3);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", (*(arr + i) + j));
        }
    }