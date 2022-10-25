// #include <stdio.h>
// int twinprime(int n)
// {

//     int i = 2;
//     // use for loop to find the twin prime
//     for (i = 2; i <= n / 2; i++)
//     {
//         // if n is completely divisible by 1 without leaving any remainder, it returns 0
//         if (n % i == 0)
//             return 0;
//     }
//     // otherwise it returns 1
//     if (i > n / 2)
//         return 1;
// }
// int main()
// {
//     int num, count = 0;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     for (int i = 2; i <= num; i++)
//     {
//         if (twinprime(i) && twinprime(i + 2))
//         {
//             printf(" \n The twin prime number is: (%d, %d) ", i, i + 2);
//             count++;
//         }
//     }
//     printf(" \n \n Total number of twin prime pairs: %d", count);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    float v = 1.2;
    if (v == 1.2)
    {
        printf("dff");
    }
    return 0;
}