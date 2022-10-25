// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[10];
//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = num % 2;
//         num = num / 2;
//     }
//     for (int j = 9; j >= 0; j--)
//     {
//         printf("%d", arr[j]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, rem, decimal = 0, base = 1;
//     printf("Enter your binarry number : ");
//     scanf("%d", &num);
//     while (num > 0)
//     {
//         rem = num % 10;
//         decimal = decimal + rem * base;
//         num = num / 10;
//         base = base * 2;
//     }
//     printf("Your decimal number is : %d", decimal);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     int Gcd;
//     printf("Enter your 1st number : ");
//     scanf("%d", &num1);
//     printf("Enter your 2nd number : ");
//     scanf("%d", &num1);
//     for (int i = 1; i <= num1 && i <= num2; i++)
//     {
//         if (num1 % i == 0 && num2 % i == 0)
//         {
//             Gcd = i;
//         }
//     }
//     printf("%d", Gcd);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     int i;
//     printf("Enter your first number : ");
//     scanf("%d", &num1);
//     printf("Enter your first number : ");
//     scanf("%d", &num1);
//     for (i = (num1 < num2) ? num1 : num2; i >= 1; i--)
//     {
//         if (num1 % i == 0 && num2 % i == 0)
//         {
//             printf("%d", i);
//             break;
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     int i;
//     printf("Enter your 1st number : ");
//     scanf("%d", &num1);
//     printf("Enter your 1st number : ");
//     scanf("%d", &num2);
//     int b = (num1 < num2) ? num2 : num1;
//     int s = (num1 < num2) ? num1 : num2;
//     for (i = 1; i <= s; i++)
//     {
//         if ((i * b) % s == 0)
//         {
//             printf("%d", i * b);
//             break;
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr1[3][3], arr2[3][3], arr3[3][3], i, j, k;
//     printf("Enter your first matrix : \n");
//     for (i = 0; i <= 2; i++)
//     {
//         for (j = 0; j <= 2; j++)
//         {
//             printf("Element %d %d : - ", i, j);
//             scanf("%d", &arr1[i][j]);
//         }
//     }
//     printf("Enter second matrix : \n");
//     for (i = 0; i <= 2; i++)
//     {
//         for (j = 0; j <= 2; j++)
//         {
//             printf("Element %d %d : - ", i, j);
//             scanf("%d", &arr2[i][j]);
//         }
//     }

//     for (i = 0; i <= 2; i++)
//     {
//         for (j = 0; j <= 2; j++)
//         {
//             arr3[i][j] = arr1[i][j] * arr2[i][j];
//         }
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char c;
//     c = getchar();
//     putchar(c);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, i;
//     printf("Enter your size of array : ");
//     scanf("%d", &num);
//     int arr[num];
//     for (i = 0; i < num; i++)
//     {
//         printf("Element %d : ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < num; i++)
//     {
//         if (arr[i] < 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     for (i = 0; i < num; i++)
//     {
//         if (arr[i] > 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, num2, i, j;
//     printf("Enter your size of array : ");
//     scanf("%d", &num);

//     int arr[num];
//     for (i = 0; i < num; i++)
//     {
//         printf("Element %d : ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter your size of array2 : ");
//     scanf("%d", &num2);
//     int arr2[num2];
//     for (i = 0; i < num2; i++)
//     {
//         printf("Element %d : ", i);
//         scanf("%d", &arr2[i]);
//     }
//     printf("Entersection of two array is : ");
//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < num2; j++)
//         {
//             if (arr[i] == arr2[j])
//             {
//                 printf("%d ", arr[i]);
//             }
//         }
//     }
//     printf("\nUnion of two array is : ");
//     for (i = 0; i < num; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     for (j = 0; j < num; j++)
//     {
//         printf("%d ", arr2[j]);
//     }
//     return 0;
// }