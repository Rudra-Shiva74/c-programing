// 1. Write a program in C to store elements in an array and print it.
// #include <stdio.h>
// int main()
// {
//     int num[10];
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &num[i]);
//     }
//     printf("your array is : - ");
//     for (int j = 0; j < 10; j++)
//     {
//         printf("%d ", num[j]);
//     }
//     return 0;
// }

// 2. Write a program in C to read n number of values in an array and display it in reverse order.
// #include <stdio.h>
// int main()
// {
//     int num[10];
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Element : %d - ", i);
//         scanf("%d", &num[i]);
//     }
//     for (int j = 9; j >= 0; j--)
//     {
//         printf("%d ", num[j]);
//     }
//     return 0;
// }

// 4. Write a program in C to copy the elements of one array into another array.
// #include <stdio.h>
// int main()
// {
//     int arr1[4], arr2[4];
//     for (int i = 0; i < 4; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr1[i]);
//     }
//     for (int j = 0; j < 4; j++)
//     {
//         arr2[j] = arr1[j];
//     }
//     for (int k = 0; k < 4; k++)
//     {
//         printf("%d ", arr2[k]);
//     }
//     return 0;
// }

// 5. Write a program in C to count a total number of duplicate elements in an array.
// int main()
// {
//     int num, i, j, k = 0;
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
//         for (j = i+1; j < num; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 k++;
//             }
//         }
//     }
//     printf("%d", k);
//     return 0;
// }

// 7. Write a program in C to merge two arrays of same size sorted in decending order.
// #include <stdio.h>
// int main()
// {
//     int num, num2, i, j, max = 0;
//     printf("Enter your size of 1st array : ");
//     scanf("%d", &num);
//     int arr[num], arr1[num], arr2[2 * num];
//     printf("This is first array : \n");
//     for (i = 0; i < num; i++)
//     {
//         printf("Element %d : ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter your size of 2nd array : ");
//     scanf("%d", &num2);
//     printf("This is second array : \n");
//     for (i = 0; i < num; i++)
//     {
//         printf("Element %d : ", i);
//         scanf("%d", &arr1[i]);
//     }
//     for (i = 0; i < num; i++)
//     {
//         arr2[i] = arr[i];
//     }
//     for (j = 0; j < num; j++)
//     {
//         arr2[i] = arr1[j];
//         i++;
//     }
//     for (i = 0; i < num + num2; i++)
//     {
//         for (j = i + 1; j < num + num2; j++)
//         {
//             if (arr2[i] > arr2[j])
//             {
//                 max = arr2[i];
//                 arr2[i] = arr2[j];
//                 arr2[j] = max;
//             }
//         }
//     }
//     for (int k = 0; k < num + num2; k++)
//     {
//         printf("%d ", arr2[k]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     int max = 0;
//     for (int i = 0; i < num; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < num; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d", max);
//     return 0;
// }

// 8. Write a program in C to count the frequency of each element of an array.
// #include <stdio.h>
// int main()
// {
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     int max = 0;
//     for (int i = 0; i < num; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }
//     int n = 0, m = 1;
//     for (int i = 0; i < num; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             n = n + arr[i];
//         }
//         else
//         {
//             m = m * arr[i];
//         }
//     }
//     printf("Even Addition is %d\n", n);
//     printf("Odd multi is %d\n", m);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     int max = 0;
//     for (int i = 0; i < num; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("Alternate array is : ");
//     for (int i = 0; i < num; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, num2;
//     printf("Enter how many element you store in array : ");
//     scanf("%d", &num);

//     int arr[num];
//     int max = 0;
//     for (int i = 0; i < num; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter your number : ");
//     scanf("%d", &num2);
//     int n = 0;
//     for (int i = 0; i < num; i++)
//     {
//         if (arr[i] == num2)
//         {
//             // printf("Position is %d\n", i + 1);
//             // printf("Yes");
//             n++;
//         }
//     }
//     printf("%d", n);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     int max = 0;
//     for (int i = 0; i < num; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }
//     int n = 0;
//     for (int i = 0; i < num; i++)
//     {
//         for (int j = i + 1; j < num; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 n = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = n;
//             }
//         }
//     }
//     for (int k = 0; k < num; k++)
//     {
//         printf("%d ", arr[k]);
//     }
//     return 0;
// }

// 10. Write a program in C to separate odd and even integers in separate arrays.
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     for (int i = 0; i < num; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("This is even number : ");
//     for (int i = 0; i < num; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     printf("\nThis is odd number : ");
//     for (int i = 0; i < num; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }

// 13. Write a program in C to insert New value in the array (sorted list )..
// #include <stdio.h>
// int main()
// {
//     int num, i, max;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     for (i = 0; i < num - 1; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("Ensert your number in array : ");
//     scanf("%d", &arr[i]);
//     for (i = 0; i < num; i++)
//     {
//         for (int j = i + 1; j < num; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 max = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = max;
//             }
//         }
//     }
//     for (int k = 0; k < num; k++)
//     {
//         printf("%d\n", arr[k]);
//     }
//     return 0;
// }

// 14. Write a program in C to insert New value in the array (unsorted list ).
// #include <stdio.h>
// int main()
// {
//     int num, i, m, num2;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     for (i = 0; i < num; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter your number to store in array : ");
//     scanf("%d", &num2);
//     printf("Where you store the value : ");
//     scanf("%d", &m);
//     for (i = num; i > m; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[m] = num2;
//     for (i = 0; i <= num; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// 15. Write a program in C to delete an element at desired position from an array.
// #include <stdio.h>
// int main()
// {
//     int num, i, m, num2;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     for (i = 0; i < num; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter your number to detele element in array : ");
//     scanf("%d", &num2);
//     for (i = num2; i < num; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     for (i = 0; i < num - 1; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// 16. Write a program in C to find the second largest element in an array.
// #include <stdio.h>
// int main()
// {
//     int num, i;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     for (i = 0; i < num; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }
//     int m = arr[0];
//     int second;
//     for (i = 0; i < num; i++)
//     {
//         if (arr[i] < m)
//         {
//             m = arr[i];
//         }
//         else if (arr[i] > m && arr[i] < second)
//         {
//             second = arr[i];
//         }
//     }
//     printf("%d\n", m);
//     printf("%d", second);
//     return 0;
// }

// 18. Write a program in C for a 2D array of size 3x3 and print the matrix.
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int arr[3][3];
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("Element %d %d : -", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             // printf("Element %d %d : -", i, j);
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 19. Write a program in C for addition of two Matrices of same size.
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int arr[3][3], arr1[3][3];
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("Element %d %d : -", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("Element %d %d : -", i, j);
//             scanf("%d", &arr1[i][j]);
//         }
//     }
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j] - arr1[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 21. Write a program in C for multiplication of two square Matrices.
// #include <stdio.h>
// int main()
// {
//     int r, c, r2, c2, i, j, k, sum = 0;
//     printf("Enter your Row of first Matrix : ");
//     scanf("%d", &r);
//     printf("Enter your Column of first Matrix : ");
//     scanf("%d", &c);
//     printf("Enter your Row second Matrix : ");
//     scanf("%d", &r2);
//     printf("Enter your Column of second Matrix : ");
//     scanf("%d", &c2);
//     if (c == r2)
//     {
//         int arr1[r][c];
//         printf("Enter your First matrix\n");
//         for (i = 0; i < r; i++)
//         {
//             for (j = 0; j < c; j++)
//             {
//                 scanf("%d", &arr1[i][j]);
//             }
//         }
//         int arr2[r2][c2];
//         int result[r][c2];
//         printf("Enter your second Matrix\n");
//         for (i = 0; i < r2; i++)
//         {
//             for (j = 0; j < c2; j++)
//             {
//                 scanf("%d", &arr2[i][j]);
//             }
//         }
//         for (i = 0; i < r; i++)
//         {
//             for (j = 0; j < c2; j++)
//             {
//                 for (k = 0; k < r2; k++)
//                 {
//                     sum += arr1[i][k] * arr2[k][j];
//                 }
//                 result[i][j] = sum;
//                 sum = 0;
//             }
//         }
//         printf("\n\n");
//         printf("The multiplication of two matrix\n");
//         for (i = 0; i < r; i++)
//         {
//             for (j = 0; j < c2; j++)
//             {
//                 printf("%d ", result[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     else
//     {
//         printf("The multipication is does not exist");
//     }
//     return 0;
// }

// 22. Write a program in C to find transpose of a given matrix.
// #include <stdio.h>
// int main()
// {
//     int r, c, i, j;
//     printf("Enter your Row : ");
//     scanf("%d", &r);
//     printf("Enter your column : ");
//     scanf("%d", &c);
//     int arr[r][c];
//     printf("Enter your matrix\n");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("The transpose of a given matrix\n");
//     for (i = 0; i < c; i++)
//     {
//         for (j = 0; j < r; j++)
//         {
//             printf("%d ", arr[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 23. Write a program in C to find sum of right diagonals of a matrix.
// #include <stdio.h>
// int main()
// {
//     int r, c, i, j;
//     printf("Enter your Row : ");
//     scanf("%d", &r);
//     printf("Enter your column : ");
//     scanf("%d", &c);
//     int arr[r][c];
//     printf("Enter your matrix\n");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int sum = 0;
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             if (i + j == r - 1)
//             {
//                 sum += arr[i][j];
//             }
//         }
//     }
//     printf("The sum of right diagonal element is : %d", sum);
//     return 0;
// }

// 24. Write a program in C to find the sum of left diagonals of a matrix.
// #include <stdio.h>
// int main()
// {
//     int r, c, i, j;
//     printf("Enter your Row : ");
//     scanf("%d", &r);
//     printf("Enter your column : ");
//     scanf("%d", &c);
//     int arr[r][c];
//     printf("Enter your matrix\n");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int sum = 0;
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             if (i==j)
//             {
//                 sum += arr[i][j];
//             }
//         }
//     }
//     printf("The sum of right diagonal element is : %d", sum);
//     return 0;
// }

// 25. Write a program in C to find sum of rows an columns of a Matrix.
// #include <stdio.h>
// int main()
// {
//     int r, c, i, j;
//     printf("Enter your Row : ");
//     scanf("%d", &r);
//     printf("Enter your column : ");
//     scanf("%d", &c);
//     int arr[r][c];
//     printf("Enter your matrix\n");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int sum = 0;
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             sum += arr[i][j];
//         }
//     }
//     printf("The sum of element is : %d", sum);
//     return 0;
// }

// 32. Write a program in C to find a pair with given sum in the array. Go to the editor
// Expected Output :
// The given array : 6 8 4 -5 7 9
// The given sum : 15
// Pair of elements can make the given sum by the value of index 0 and 5
// #include <stdio.h>
// int main()
// {
//     int num, i, num2;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     for (i = 0; i < num; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter your number : ");
//     scanf("%d", &num2);
//     for (i = 0; i < num; i++)
//     {
//         for (int j = i + 1; j < num; j++)
//         {
//             if (num2 == arr[i] + arr[j])
//             {
//                 printf("index %d and %d is = %d\n", i, j, num2);
//             }
//         }
//     }
//     return 0;
// }

// 33. Write a program in C to find the majority element of an array. Go to the editor
// A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
// Expected Output :
// The given array is : 4 8 4 6 7 4 4 8
// There are no Majority Elements in the given array.

// #include <stdio.h>
// int main()
// {
//     int num, i;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     for (i = 0; i < num; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }
//     int max = arr[0];
//     for (i = 0; i < num; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     int n = 0;
//     for (i = 0; i < num; i++)
//     {
//         if (arr[i] == max)
//         {
//             n++;
//         }
//     }
//     int majority = (max / n) + 1;
//     int k = 0;
//     for (i = 0; i < num; i++)
//     {
//         for (int j = i + 1; j < num; j++)
//         {
//             if (arr[i] = arr[j])
//             {
//                 k++;
//             }
//         }
//     }
//     if (majority < k)
//     {
//         printf("yes");
//     }
//     else
//     {
//         printf("no");
//     }
//     return 0;
// }
// 35. Write a program in C to find the largest sum of contiguous subarray of an array. Go to the editor
// Expected Output :
// The given array is : 8 3 8 -5 4 3 -4 3 5
// The largest sum of contiguous subarray is : 21

// #include <stdio.h>
// int main()
// {
//     int num, i;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     for (i = 0; i < num; i++)
//     {
//         printf("Element %d : - ", i);
//         scanf("%d", &arr[i]);
//     }

//     return 0;
// }

// missing number in c
// #include <stdio.h>
// int main()
// {
//     int num, i, j, m = 0, n;
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
//         m = m + arr[i];
//     }
//     n = num + 1;
//     int mising = (n * (n + 1)) / 2 - m;
//     printf("%d", mising);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, i, j, m = 0, k = 1;
//     printf("Enter your size of array : ");
//     scanf("%d", &num);
//     int arr[num], arr2[num + 1];
//     for (i = 0; i < num; i++)
//     {
//         printf("Element %d : ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < num; i++)
//     {
//         for (j = i + 1; j < num; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 m = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = m;
//             }
//         }
//     }
//     for (i = 1; i < num + 1; i++)
//     {
//         if (arr[i - 1] == i)
//         {
//             k++;
//         }
//     }
//     printf("%d", k);
//     return 0;
// }

// write a c program in two element in array which sum is close the 0
// #include <stdio.h>
// int main()
// {
//     int num, i;
//     printf("Enter your size of array : ");
//     scanf("%d", &num);
//     int arr[num];
//     printf("The Array is down : ");
//     for (i = 0; i < num; i++)
//     {
//         // printf("Element %d : ", i);
//         scanf("%d", &arr[i]);
//     }
//     int m = arr[0], m1 = arr[1];
//     for (i = 0; i < num; i++)
//     {
//         if (arr[i] < m)
//         {
//             m = arr[i];
//         }
//         else if (arr[i] > m && arr[i] < m1)
//         {
//             m1 = arr[i];
//         }
//     }
//     printf("The sum of two element which is near to zero is %d %d and sum = %d", m, m1, m + m1);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int r, c, i, j, sum = 0;
//     printf("Enter your Row : ");
//     scanf("%d", &r);
//     printf("Enter your Column : ");
//     scanf("%d", &c);
//     int arr[r][c], arr1[i][j], result[r][c];
//     printf("This is First Array : ");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             printf("Element %d %d : ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("This is second Array : ");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             printf("Element %d %d : ", i, j);
//             scanf("%d", &arr1[i][j]);
//         }
//     }
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             for (int k = 0; k < c; k++)
//             {
//                 sum += arr[i][k] * arr1[k][j];
//             }
//             result[i][j] = sum;
//             sum = 0;
//         }
//     }
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int m, n, sum = 0;
//     int a[3][2], b[2][4], result[3][4];
//     printf("Enter the first matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             // printf("Enter the %d %d element of first matrix\n", i, j);
//             scanf("%d", &a[i][j]);
//             // printf("\t");
//         }
//         // printf("\n");
//     }
//     printf("Enter the second matrix\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             // printf("Enter the %d %d element of first matrix\n", i, j);
//             scanf("%d", &b[i][j]);
//             // printf("\t");
//         }
//         // printf("\n");
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             // Calculate the result
//             for (int k = 0; k < 4; k++)
//             {
//                 sum += a[i][k] * b[k][j];
//             }
//             result[i][j] = sum;
//             sum = 0;
//         }
//     }

//     // Print the resultant matrix
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             // Print the result
//             printf("%d \t", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, i, j, sum, temp;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         temp = i;
//         while (i > 0)
//         {
//             sum = i % 10;
//             i = i / 10;
//         }
//         i = temp;
//         if (sum == 1)
//         {
//             printf("%d ", temp);
//         }

//         while (i > 0)
//         {
//             sum = i % 10;
//             i = i / 10;
//         }
//         i = temp;
//         if (sum == 2)
//         {
//             printf("%d ", temp);
//         }
//     }

//     return 0;
// }

// shortng array by 0 1
// #include <stdio.h>
// int main()
// {
//     int str[10], i;
//     printf("Enter your array : ");
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &str[i]);
//     }
//     for (i = 0; i < 10; i++)
//     {
//         if (str[i] == 0)
//         {
//             printf("%d", str[i]);
//         }
//     }
//     for (i = 0; i < 10; i++)
//     {
//         if (str[i] == 1)
//         {
//             printf("%d", str[i]);
//         }
//     }
//     return 0;
// // }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int num, i, j, sum;
//     printf("Enter your size of array : ");
//     scanf("%d", &num);
//     int arr[num];
//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < num; i++)
//     {
//         for (j = i; j < num; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 sum = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = sum;
//             }
//         }
//     }
//     for (i = 0; i < num; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int i, arr[20], j, no, c = 0;
//     printf("Enter size of array: ");
//     scanf("%d", &no);
//     printf("Enter any %d elements in array: ", no);
//     for (i = 0; i < no; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Duplicate elements are: ");
//     for (i = 0; i < no; i++)
//     {
//         for (j = i + 1; j < no; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 c++;
//                 break;
//             }
//         }
//     }
//     printf("%d", c);
// }

// #include <stdio.h>
// #include <string.h>
// typedef struct complex
// {
//     float real;
//     float imag;
// } complex;
// int main()
// {
//     complex n1, n2;
//     printf("Enter your real number : ");
//     scanf("%f", &n1.real);
//     printf("Enter your imag number : ");
//     scanf("%f", &n1.imag);
//     printf("For second note");
//     printf("\nEnter your real number : ");
//     scanf("%f", &n2.real);
//     printf("Enter your imag number : ");
//     scanf("%f", &n2.imag);
//     printf("Total numbe is %.1f + i%.1f", n1.real + n2.real, n1.imag + n1.imag);
//     return 0;
// }

// #include <stdio.h>
// typedef struct complex
// {
//     float real;
//     float imag;
// } complex;
// complex add(complex n1, complex n2);
// int main()
// {
//     complex n1, n2, result;
//     printf("For 1st complex number \n");
//     printf("Enter the real and imaginary parts: ");
//     scanf("%f %f", &n1.real, &n1.imag);
//     printf("\nFor 2nd complex number \n");
//     printf("Enter the real and imaginary parts: ");
//     scanf("%f %f", &n2.real, &n2.imag);
//     result = add(n1, n2);
//     printf("Sum = %.1f + %.1fi", result.real, result.imag);
//     return 0;
// }
// complex add(complex n1, complex n2)
// {
//     complex temp;
//     temp.real = n1.real + n2.real;
//     temp.imag = n1.imag + n2.imag;
//     return (temp);
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *p;
//     printf("%d %d", sizeof(*p), sizeof(p));
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int g[] = {
//         67,
//         8,
//         9,
//         9,
//         0,
//         7,
//         6,
//         5,
//         4,
//     };
//     printf("%d", sizeof(g) / sizeof(g[0]));
//     return 0;
// }

// Array and pointer in c
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int arr[5] = {1, 3, 5, 6, 7}, *ptr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         ptr[i] = &arr[i];
//     }
//     printf("%d\n", *(&ptr[1]));
//     printf("%d", &arr[1]);
//     return 0;
// }

// reverse array in
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n, i;
//     printf("Enter your size of array : ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter your array\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (i = n - 1; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }