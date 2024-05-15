// Count Digit
// #include <stdio.h>
// int digitcount(int n){
//     int temp = n, count = 0;
//     while (temp)
//     {
//         count++;
//         temp /=10;
//     }
//     return count;
    
// }
// int main()
// {
//     int num = 3065895;
//     printf("%d", digitcount(num));
//     return 0;
// }




// What if we think of using log10?
// #include <stdio.h>
// #include<math.h>
// int digitcount(int n){

//     return log10(n)+1;

// }
// int main()
// {
//     int num = 30760045;
//     printf("%d", digitcount(num));
//     return 0;
// }

// What if we think of using recursion
// #include <stdio.h>
// int digitcount(int n){
//     if (n/10 == 0)
//     {
//         return 1;
//     }
//     return 1+ digitcount(n/10);
// }
// int main()
// {
//     int num = 1989873;
//     printf("%d", digitcount(num));
//     return 0;
// }
