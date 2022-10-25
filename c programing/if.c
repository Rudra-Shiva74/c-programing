// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int num, n, i, j, m, l;
//     printf("Enter your square matrix size : ");
//     scanf("%d", &num);
//     n = 2 * num - 1;
//     int Arr[n][n];
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
//             {
//                 printf("%d", num);
//             }
//             else if (i == num - 1 && j == num - 1)
//             {
//                 printf("%d", 1);
//             }
//             else if (i == 1 || j == 1 || i == n - 2 || j == n - 2)
//             {
//                 printf("%d", num - 1);
//             }
//             else if (i == 2 || j == 2 || i == n - 3 || j == n - 3)
//             {
//                 printf("%d", num - 2);
//             }
//             else if (i == 3 || j == 3 || i == n - 4 || j == n - 4)
//             {
//                 printf("%d", num - 3);
//             }
//             else if (i == 4 || j == 4 || i == n - 5 || j == n - 5)
//             {
//                 printf("%d", num - 4);
//             }
//             else if (i == 5 || j == 5 || i == n - 6 || j == n - 6)
//             {
//                 printf("%d", num - 5);
//             }
//             else if (i == 6 || j == 6 || i == n - 7 || j == n - 7)
//             {
//                 printf("%d", num - 6);
//             }
//             else
//             {
//                 printf("2");
//             }
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    int i, m = 0, flag = 0, a;
    printf("Enter your number : ");
    scanf("%d", &a);
    m = a / 2;
    for (i = 2; i <= m; i++)
    {
        if (a % i == 0)
        {
            printf("Number is not prime\n\n");
            flag = 1;
        }
        break;
    }
    if (flag == 0)
        printf("Number is prime\n\n");
    return 0;
}