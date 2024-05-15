#include<stdio.h>


int main()
{
    int arr[3]={1,10,2};
    int num1;
    int bigger = arr[0], biggerfound = 0;
    for (int i = 0; i < 3; i++)
    {
        num1 = bigger;
        if ((double)num1/arr[i] > 1)
        {
            biggerfound = 1;
            bigger = num1;
        }
        else{
            biggerfound = 0;
        }
        

    }
    
    return 0;
}