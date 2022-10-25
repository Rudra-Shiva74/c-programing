// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int a = 2, b = 5;
//     int *p, *q;
//     p = &a;
//     q = &b;
//     printf("%d\n", *p);
//     printf("%d", ++p);
// }

// #include <stdio.h>
// int fun(int a, int b)
// {
//     int temp = 0;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("%d %d", a, b);
// }
// int main()
// {
//     int a = 5, b = 6;
//     printf("%d %d\n", a, b);
//     fun(a, b);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int a = 8, b;
//     b = (a++, ++a, a >> 2);
//     printf("%d", b);
//     printf("\n%d", a);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int a = 30, b = 40;
//     int *p, *q;
//     p = &a;
//     q = p;
//     printf("%d", *q);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int a = 34;
//     int *p;
//     int **q;
//     p = &a;
//     q = &p;
//     printf("%d", *(&a));
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int a = 56;
//     void *p;
//     p = &a;
//     printf("%d", *(int *)p);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     char *p;
//     p = (char *)malloc(sizeof(char));
//     scanf("%c", p);
//     printf("%c", *p);
//     free(p);
//     return 0;
// }

// #include <stdio.h>
// int *fun()
// {
//     int a = 45;
//     return &a;
// }
// int main()
// {
//     int *ptr;
//     ptr = fun();
//     printf("%d", *ptr);
//     return 0;
// }

// 4. Write a program in C to add two numbers using pointers.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int num1, num2, *ptr1, *ptr2;
//     printf("Enter your numbers : ");
//     scanf("%d %d", &num1, &num2);
//     ptr1 = &num1;
//     ptr2 = &num2;
//     printf("%d", (*ptr1) + (*ptr2));
//     return 0;
// }

// 5. Write a program in C to add numbers using call by reference.
// #include <stdio.h>
// #include <string.h>
// int add(int *a, int *b)
// {
//     return (*a + *b);
// }
// int main()
// {
//     int num1, num2, *ptr1, *ptr2;
//     printf("Enter your numbers : ");
//     scanf("%d %d", &num1, &num2);
//     printf("%d", add(&num1, &num2));
//     return 0;
// }

// 6. Write a program in C to find the maximum number between two numbers using a pointer.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int num1, num2, *ptr1, *ptr2;
//     printf("Enter your numbers : ");
//     scanf("%d %d", &num1, &num2);
//     ptr1 = &num1;
//     ptr2 = &num2;
//     if (*ptr1 > *ptr2)
//     {
//         printf("%d", *ptr1);
//     }
//     else
//     {
//         printf("%d", *ptr2);
//     }
//     return 0;
// }

// 7. Write a program in C to store n elements in an array and print the elements using pointer.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n, i;
//     printf("Enter your size of arr : ");
//     scanf("%d", &n);
//     int arr[n], *ptr;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", arr + i);
//     }
//     for (i = 0; i < n; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

// 8. Write a program in C to print all permutations of a given string using pointers.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "abcd", *ptr;
//     ptr = str;
//     return 0;
// }

// 9. Write a program in C to find the largest element using Dynamic Memory Allocation.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, *ptr, i;
//     printf("Enter your numbe : ");
//     scanf("%d", &n);
//     int arr[n];
//     ptr = (int *)malloc(n * sizeof(int));
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", ptr + i);
//         arr[i] = *(ptr + i);
//     }
//     int max = arr[1];
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     printf("\n%d", max);
//     return 0;
// }

// 10. Write a program in C to Calculate the length of the string using a pointer.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100], *ptr;
//     printf("Enter your string : ");
//     gets(str);
//     ptr = str;
//     int i = 0;
//     while (*(&ptr[i]) != '\0') // ptr+i=&ptr[i]
//     {
//         i++;
//     }
//     printf("Lenth is %d", i);
//     return 0;
// }

// 11. Write a program in C to swap elements using call by reference.
// #include <stdio.h>
// #include <string.h>
// int swap(int *a, int *b, int *c)
// {
//     int temp1, temp2;
//     temp1 = *a;
//     temp2 = *b;
//     *a = *c;
//     *b = temp1;
//     *c = temp2;
// }
// int main()
// {
//     int num1, num2, num3;
//     printf("Enter your number : ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     swap(&num1, &num2, &num3);
//     printf("%d %d %d", num1, num2, num3);
//     return 0;
// }

// 12. Write a program in C to find the factorial of a given number using pointers.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int num, i, sum = 1;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int *ptr;
//     ptr = &num;
//     for (i = 1; i <= *ptr; i++)
//     {
//         sum = sum * i;
//     }
//     printf("%d", sum);
//     return 0;
// }

// 14. Write a program in C to sort an array using Pointer.
// #include <stdio.h>
// int sort(int n, int *ptr)
// {
//     int i, j, t;
//     for (i = 0; i < n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (*(ptr + j) < *(ptr + i))
//             {
//                 t = *(ptr + i);
//                 *(ptr + i) = *(ptr + j);
//                 *(ptr + j) = t;
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     printf("Enter your size : ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     sort(n, arr);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// 18. Write a program in C to show the usage of pointer to structure. Go to the editor
// Expected Output :
// #include <stdio.h>
// struct EmpAddress
// {
//     char *ename;
//     char stname[20];
//     int pincode;
// } employee = {"John Alter", "Court Street \n", 654134}, *pt = &employee;

// int main()
// {
//     printf("\n\n Pointer : Show the usage of pointer to structure :\n");
//     printf(" %s from %s \n\n", pt->ename, (*pt).stname);
//     return 0;
// }

//                                      pointer tricky question and ans
// #include <stdio.h>
// int main()
// {
//     char *ptr;
//     char string[] = "learn C from 2braces.com";
//     ptr = string;
//     ptr += 6;
//     printf("%s", ptr);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     const int a = 5;
//     const int *ptr;
//     ptr = &a;
//     *ptr = 10;
//     printf("%d\n", a);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("%d", sizeof(void *));
//     return 0;
// }

// #include <stdio.h>
// void function(char **);
// int main()
// {
//     char *arr[] = {"ant", "bat", "cat", "dog", "egg", "fly"};
//     function(arr);
//     return 0;
// }
// void function(char **ptr)
// {
//     char *ptr1;
//     ptr1 = (ptr += sizeof(int))[-2];
//     printf("%s\n", ptr1);
// }