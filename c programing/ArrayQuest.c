// #include <stdio.h>
// int main()
// {
//     int num, i, j;
//     printf("Enter your size of matrix : ");
//     scanf("%d", &num);
//     int arr[num][num];
//     printf("Enter  your matrix\n");
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("\n");
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             if (i + j == num - 1 || i == 0 || i == num - 1)
//             {
//                 printf("%d", arr[i][j]);
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

// A  print all elements present in the first row from left to right
// #include <stdio.h>
//     int
//     main()
// {
//     int num, i, j;
//     printf("Enter your size of matrix : ");
//     scanf("%d", &num);
//     int arr[num][num];
//     printf("Enter  your matrix\n");
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             if (i == 0)
//             {
//                 printf("%d ", arr[i][j]);
//             }
//         }
//     }
//     return 0;
// }

//  B  print all elements present in  the last column from top to bottom.
// #include <stdio.h>
// int main()
// {
//     int num, i, j;
//     printf("Enter your size of matrix : ");
//     scanf("%d", &num);
//     int arr[num][num];
//     printf("Enter  your matrix\n");
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             if (j == num - 1)
//             {
//                 printf("%d ", arr[i][j]);
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//     }
//     return 0;
// }

// C Print all elements present in the last row from right to left.
// #include <stdio.h>
// int main()
// {
//     int num, i, j;
//     printf("Enter your size of matrix : ");
//     scanf("%d", &num);
//     int arr[num][num];
//     printf("Enter your matrix\n");
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (i = num - 1; i >= 0; i--)
//     {
//         for (j = num - 1; j >= 0; j--)
//         {
//             if (i == 2)
//             {
//                 printf("%d ", arr[i][j]);
//             }
//         }
//     }
//     return 0;
// }

// D  print all elements present in the first column from bottom to top
// #include <stdio.h>
// int main()
// {
//     int num, i, j;
//     printf("Enter your size of matrix : ");
//     scanf("%d", &num);
//     int arr[num][num];
//     printf("Enter your matrix\n");
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("\n");
//     for (i = num - 1; i >= 0; i--)
//     {
//         for (j = num - 1; j >= 0; j--)
//         {
//             if (j == 0)
//             {
//                 printf("%d ", arr[i][j]);
//             }
//         }
//     }
//     return 0;
// }

// Program to find the saddle point coordinates in a given matrix
// #include <stdio.h>
// int main()
// {
//     int num, i, j, sum = 0;
//     printf("Enter your size of matrix : ");
//     scanf("%d", &num);
//     int arr[num][num];
//     printf("Enter your matrix\n");
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("\n");
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             if (arr[i][j] > sum)
//             {
//                 sum = arr[i][j];
//             }
//         }
//     }
//     printf("%d", sum);
//     return 0;
// }

// Given a matrix, the task is to print the boundary elements of the matrix and display their sum
// #include <stdio.h>
// int main()
// {
//     int num, i, j, sum = 0;
//     printf("Enter your size of matrix : ");
//     scanf("%d", &num);
//     int arr[num][num];
//     printf("Enter  your matrix\n");
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("\n");
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             if (i == 0 || j == 0 || i == num - 1 || j == num - 1)
//             {
//                 printf("%d", arr[i][j]);
//                 sum += arr[i][j];
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     printf("\n%d", sum);
//     return 0;
// }

// WAP to print all elements present in the matrix except border elements.
// #include <stdio.h>
// int main()
// {
//     int num, i, j, sum = 0;
//     printf("Enter your size of matrix : ");
//     scanf("%d", &num);
//     int arr[num][num];
//     printf("Enter  your matrix\n");
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("\n");
//     printf("\n%d", sum);
//     return 0;
// }

//  Program to find the saddle point coordinates in a given matrix
// #include <stdio.h>
// int main()
// {
//     int num, i, j, k;
//     printf("Enter your size of matrix : ");
//     scanf("%d", &num);
//     int arr[num][num];
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (k = 0; k < num + 2; k++)
//     {
//         for (j = 0; j < num; j++)
//         {
//             if(sum>arr[])
//         }
//     }
//     return 0;
// }

// write a program to print by function
// 1 Addition
// 2 Substraction
// 3 Division
// 4 Multiplication
// #include <stdio.h>
// #include <string.h>
// int Add(int a, int b)
// {
//     return a + b;
// }
// int Sub(int a, int b)
// {
//     return a - b;
// }
// int Div(int a, int b)
// {
//     return a / b;
// }
// int Mult(int a, int b)
// {
//     return a * b;
// }
// int main()
// {
//     int n, m, o;
//     while (1)
//     {
//         printf("Enter your first number : ");
//         scanf("%d", &n);
//         printf("Enter your second number : ");
//         scanf("%d", &m);
//         printf("Enter your opr number : ");
//         scanf("%d", &o);
//         switch (o)
//         {
//         case 1:
//             printf("Addition : %d\n\n", Add(n, m));
//             break;
//         case 2:
//             printf("Substraction : %d\n\n", Sub(n, m));
//             break;
//         case 3:
//             printf("Division : %d\n\n", Div(n, m));
//             break;
//         case 4:

//             printf("Multiplication : %d\n\n", Mult(n, m));
//             break;
//         case 5:
//             return 0;
//         }
//     }
// }

// swapping two program without using function
// #include <stdio.h>
// #include <string.h>
//     int
//     main()
// {
//     int n, m;
//     printf("Enter your first number : ");
//     scanf("%d", &n);
//     printf("Enter your second number : ");
//     scanf("%d", &m);
//     printf("Before swapping n & m is %d : %d", n, m);
//     n = n + m;
//     m = n - m;
//     n = n - m;
//     printf("After swapping n & m is %d : %d", n, m);
//     return 0;
// }

// largest number in 4 number
// #include <stdio.h>
//     int
//     max(int m, int n)
// {
//     if (m > n)
//     {
//         return m;
//     }
//     else
//     {
//         return n;
//     }
// }
// int main()
// {
//     int a, b, c, d;
//     printf("Enter your numbers : ");
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int x = max(a, b);
//     int y = max(c, d);
//     printf("%d", max(x, y));
//     return 0;
// }

// write a program to print by function 1 Factorial 2 Prime number 3 Armstrong number 4 Strong                 98
// #include <stdio.h>
// int Fac(int a)
// {
//     int i, r = 1;
//     for (i = 1; i <= a; i++)
//     {
//         r = r * i;
//     }
//     return r;
// }

// int Prime(int a)
// {
//     int i, m = 0, flag = 0;
//     m = a / 2;
//     for (i = 2; i <= m; i++)
//     {
//         if (a % i == 0)
//         {
//             printf("Number is not prime\n\n");
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//         printf("Number is prime\n\n");
//     return 0;
// }

// int Arm(int a)
// {
//     int k = 0, r, i, sum = 1, m = 0, temp;
//     temp = a;
//     while (a > 0)
//     {
//         a = a / 10;
//         k++;
//     }
//     a = temp;
//     while (a > 0)
//     {
//         r = a % 10;
//         a = a / 10;
//         for (i = 1; i <= k; i++)
//         {
//             sum = sum * r;
//         }
//         m = m + sum;
//         sum = 1;
//     }
//     return m;
// }
// int Strong(int a)
// {
//     int i, sum = 1, rec = 0, m = 0;
//     while (a > 0)
//     {
//         rec = a % 10;
//         a = a / 10;
//         for (i = 1; i <= rec; i++)
//         {
//             sum = sum * i;
//         }
//         m = m + sum;
//         sum = 1;
//     }
//     return m;
// }
// int main()
// {
//     int n, o, func;
//     while (1)
//     {
//         printf("1 Factorial\n2 Prime number\n3 Armstrong number\n4 Strong\n\n");
//         printf("Enter your perform number : ");
//         scanf("%d", &o);
//         switch (o)
//         {
//         case 1:
//             printf("Enter your number : ");
//             scanf("%d", &n);
//             printf("Factorial : %d\n\n", Fac(n));
//             break;
//         case 2:
//             printf("Enter your number : ");
//             scanf("%d", &n);
//             Prime(n);
//             break;
//         case 3:
//             printf("Enter your number : ");
//             scanf("%d", &n);
//             func = Arm(n);
//             if (func == n)
//             {
//                 printf("This is Armstrong number\n\n");
//             }
//             else
//             {
//                 printf("This is not Armstrong number\n\n");
//             }
//             break;
//         case 4:
//             printf("Enter your number : ");
//             scanf("%d", &n);
//             func = Strong(n);
//             if (func == n)
//             {
//                 printf("This is strong number\n\n");
//             }
//             else
//             {
//                 printf("This is not strong number\n\n");
//             }
//             break;
//         case 5:
//             return 0;
//         }
//     }
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int row1, colum1, row2, colum2, i, j, k, sum = 0;
//     printf("Enter your First row and First column : ");
//     scanf("%d %d", &row1, &colum1);
//     printf("Enter your Second row and Second column : ");
//     scanf("%d %d", &row2, &colum2);
//     int arr1[row1][colum1], arr2[row2][colum2], result[row1][colum2];
//     printf("\nEnter your First matrix : ");
//     for (i = 0; i < row1; i++)
//     {
//         for (j = 0; j < colum1; j++)
//         {
//             scanf("%d", &arr1[i][j]);
//         }
//     }
//     printf("\nEnter your Second matrix : ");
//     for (i = 0; i < row2; i++)
//     {
//         for (j = 0; j < colum2; j++)
//         {
//             scanf("%d", &arr2[i][j]);
//         }
//     }
//     for (i = 0; i < row1; i++)
//     {
//         for (j = 0; j < colum2; j++)
//         {
//             for (k = 0; k < row2; k++)
//             {
//                 sum += arr1[i][k] * arr2[k][j];
//             }
//             result[i][j] = sum;
//             sum = 0;
//         }
//     }
//     printf("\nYour matrix is : \n");
//     for (i = 0; i < row1; i++)
//     {
//         for (j = 0; j < colum2; j++)
//         {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int row, colum, i, j;
//     printf("Enter your row and colum of matrix : ");
//     scanf("%d %d", &row, &colum);
//     int arr[row][colum];
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < colum; j++)
//         {
//             scanf("%d ", &arr[i][j]);
//         }
//     }
//     for (i = 0; i < colum; i++)
//     {
//         for (j = 0; j < row; j++)
//         {
//             printf("%d", arr[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }