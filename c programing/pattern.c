// *
// * *
// * * *
//
// 1
// 12
// 123
// 1234
// #include <stdio.h>
// int main()
// {
//     int i, j, num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// A
// B B
// C C C
// D D D D
// E E E E E
// #include <stdio.h>
// int main()
// {
//     int i, j, num;
//     char k = 'A';
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c", k);
//         }
//         k++;
//         printf("\n");
//     }
//     return 0;
// }

// * * * * *
// * * * *
// * * *
// * *
// *
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// #include <stdio.h>
// int main()
// {
//     int num, i, j;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     for (i = num; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// reverse pyramid
// #include <stdio.h>
// int main()
// {
//     int i, j, k, num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf(" ");
//         }
//         for (k = num; k >= i; k--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 23
// 456
// 78910
// #include <stdio.h>
// int main()
// {
//     int i, j, num, k = 1;
//     printf("ENter your number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d ", k++);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 12345
// 12345
// 12345
// 12345
// #include <stdio.h>
// int main()
// {
//     int i, j, num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int k = num;
//     for (i = 1; i <= num; i++)
//     {
//         for (j = 1; j <= num; j++)
//         {
//             printf("%d", k);
//             k--;
//         }
//         k = num;
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 22
// 333
// 4444
// 55555
// #include <stdio.h>
// int main()
// {
//     int i, j, k, num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     k = num;
//     for (i = 1; i <= num; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", k);
//             k--;
//         }
//         k = num;
//         printf("\n");
//     }
//     return 0;
// }

// 12345
// 1234
// 123
// 12
// 1
// #include <stdio.h>
// int main()
// {
//     int i, j, k, num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     k = 1;
//     for (i = num; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", k);
//             k++;
//         }
//         k = 1;
//         printf("\n");
//     }
//     return 0;
// }

// 5
// 54
// 543
// 5432
// 54321
// #include <stdio.h>
// int main()
// {
//     int i, j, k, num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     for (i = 1;i<=num;i++)
//     {
//         for (j = num;j>=i;j--)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, k, num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         for (j = 1; j <= num; j++)
//         {
//             if (j == 1 || i == num || i == j)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 10
// 101
// 1010
// 10101
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i, j, k, num;
//     printf("Eneter your number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j % 2);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i, j, k, num;
//     printf("Eneter your number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     for (i = num - 1; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 43333334
// 44444444
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i, j, k, num, num2, l, m;
//     printf("Enetr your number : ");
//     scanf("%d", &num);
//     num2 = num * 2 - 1;
//     k = num2;
//     while (1)
//     {
//         for (i = num2; i >= 1; i--)
//         {
//             for (j = num2; j >= 1; j--)
//             {
//                 if (i == 1 || i == num2 || j == 1 || j == num2)
//                 {
//                     printf("%d", num);
//                 }
//             }
//             printf("\n");
//         }
//         num--;
//         num2 = num2 - 2;
//         if (num2 < 0)
//         {
//             break;
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, k, num;
//     printf("Enetr your number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf(" ");
//         }
//         for (k = num; k >= i; k--)
//         {
//             printf("%d ",k);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 12345  54321
// 2345    5432
// 345      543
// 45        54
// 5          5
// #include <stdio.h>
// int main()
// {
//     int i, j, k, l, num;
//     printf("Enetr your number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         for (j = i; j <= num; j++)
//         {//             printf("%d", j);
//         }
//         for (l = 1; l <= i; l++)
//         {
//             printf("  ");
//         }
//         for (k = num; k >= i; k--)
//         {
//             printf("%d", k);
//         }
//         printf("\n");
//     }
//     return 0;
// }