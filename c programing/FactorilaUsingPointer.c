// find the factorial using pointer
// #include <stdio.h>
// int findFactorial(int, int *);
// int main()
// {
//     int factorial, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     findFactorial(num, &factorial);
//     printf("Factorial of %d is: %d", num, factorial);
//     return 0;
// }
// int findFactorial(int num, int *factorial)
// {
//     int i;
//     *factorial = 1;
//     for (i = 1; i <= num; i++)
//         *factorial = *factorial * i;
// }

// Toyler series
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     float power;
//     printf("Eter your number : ");
//     scanf("%f", &power);
//     float acc = 30;
//     float ans = 1;
//     float temp = 1;
//     for (int i = 1; i <= acc; i++)
//     {
//         temp = (temp * power) / i;
//         ans = ans + temp;
//     }
//     printf("%f", ans);
//     return 0;
// }

// wap to enter number integer form and reverse it string function
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int num, i, n;
//     printf("Enter yor number : ");
//     scanf("%d", &num);
//     char str[num];
//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", &n);
//         str[i] = n;
//     }
//     for (i = num - 1; i >= 0; i--)
//     {
//         printf("%d ", str[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i, j, k, num;
//     printf("Enter tour number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         for (j = 0; j < i; j++)
//         {
//             printf("%d", j + i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// write a c program to find maximum elemnt in c using function;
// #include <stdio.h>
// #include <string.h>
// int sort(int arr[], int num)
// {
//     int i, max = 0;
//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < num; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }
// int main()
// {
//     int num1;
//     printf("Enter your number : ");
//     scanf("%d", &num1);
//     int arr1[num1];
//     printf("The largest number in the array is %d", sort(arr1, num1));
//     return 0;
// }

