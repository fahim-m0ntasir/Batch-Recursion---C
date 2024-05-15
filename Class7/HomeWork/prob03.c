#include<stdio.h>
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int a = 5;
    int b = 6;
    // printf("Before swaping,\na = %d, b = %d\n", a, b);
    // swap(&a, &b);
    // printf("After swaping,\na = %d, b = %d", a, b);
    int *ptra1 = &a; // ptra hold the adress, and *ptra shows the value stored in that adress
    int *ptra2 = &b;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n", ptra1);
    printf("%d\n", ptra2);
    printf("%d\n", *ptra1);
    printf("%d\n", *ptra2);
}