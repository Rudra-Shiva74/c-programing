// // 2. Write a program in C to find the length of a string without using library function.
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     char Abhi[20];
//     printf("Enter your string : ");
//     gets(Abhi);
//     puts(Abhi);
//     while (Abhi[i] != '\0')
//     {
//         i++;
//     }
//     printf("%d", i);
//     return 0;
// }

// Write a program in C to separate the individual characters from a string.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i = 0;
//     char str[20];
//     printf("Enter your string : ");
//     gets(str);
//     for (i = strlen(str)-1; i >=0; i--)
//     {
//         printf("%c ", str[i]);
//     }
//     return 0;
// }

//  Write a program in C to count the total number of words in a string.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i = 0, k = 1;
//     char str[100];
//     printf("Enter your string : ");
//     gets(str);
//     for (i = 0; i < strlen(str); i++)
//     {
//         if (str[i] == ' ')
//         {
//             k++;
//         }
//     }
//     printf("%d", k);
//     return 0;
// }

// Write a program in C to compare two strings without using string library functions.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i, k = 0;
//     char str1[100], str2[100];
//     printf("Enter your first string : ");
//     gets(str1);
//     printf("Enter your second string : ");
//     gets(str2);
//     for (i = 0; i < strlen(str1); i++)
//     {
//         if (str1[i] == str2[i])
//         {
//             k++;
//         }
//     }
//     if (k == strlen(str1))
//     {
//         printf("String are equal");
//     }
//     else
//     {
//         printf("String is not equal");
//     }
//     return 0;
// }

// Write a program in C to count total number of alphabets, digits and special characters in a string
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i, k, j, l = 0, m, n = 0, v = 0;
//     char srt[100];
//     printf("Enter your string : ");
//     gets(srt);
//     for (i = 0; i < strlen(srt); i++)
//     {
//         for (j = 'a'; j <= 'z'; j++)
//         {
//             if (srt[i] == j)
//             {
//                 l++;
//             }
//         }
//         for (k = 'A'; k <= 'Z'; k++)
//         {
//             if (srt[i] == k)
//             {
//                 l++;
//             }
//         }
//         for (m = '0'; m <= '9'; m++)
//         {
//             if (srt[i] == m)
//             {
//                 n++;
//             }
//         }
//     }
//     printf("Alphabet is %d\n", l);
//     printf("Number is %d\n", n);
//     printf("Special char is %d\n", strlen(srt) - (l + n));
//     return 0;
// }

// Write a program in C to find maximum occurring character in a string.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i, j, k = 0, p = 0, m = 0;
//     char str[100], arr[20];
//     printf("Enter your string : ");
//     gets(str);
//     for (j = 'a'; j <= 'z'; j++)
//     {
//         k = 0;
//         for (i = 0; i < strlen(str); i++)
//         {
//             if (j == str[i])
//             {
//                 k++;
//                 if (p < k)
//                 {

//                     p = k;
//                     arr[m] = j;
//                     m++;
//                     // break;
//                 }
//             }
//         }
//     }
//     printf("%c\n", arr[0]);
//     printf("%d", p);
//     return 0;
// }

// Write a program in C to copy one string to another string
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i;
//     char str[100], str2[100];
//     printf("Enter your string : ");
//     gets(str);
//     puts(str);
//     for (i = 0; i < strlen(str); i++)
//     {
//         str2[i] = str[i];
//     }
//     for (i = 0; i < strlen(str); i++)
//     {
//         printf("%c", str2[i]);
//     }
//     // strcpy(str2, str);
//     // puts(str2);
//     return 0;
// }

// Write a C program to sort a string array in ascending order.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i, j;
//     char str[100];
//     printf("Enter your string : ");
//     gets(str);
//     for (i = 'a'; i <= 'z'; i++)
//     {
//         for (j = 0; j < strlen(str); j++)
//         {
//             if (i == str[j])
//             {
//                 printf("%c", i);
//             }
//             else if (str[j] == i - 32)
//             {
//                 printf("%c", i - 32);
//             }
//         }
//     }
//     return 0;
// }

// shorting the list of string
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i, j;
//     char str[10][20], temp[20];
//     printf("Enter your string\n");
//     for (i = 0; i < 10; i++)
//     {
//         gets(str[i]);
//     }
//     for (i = 0; i < 10; i++)
//     {
//         for (j = i + 1; j < 10; j++)
//         {
//             if (strcmp(str[i], str[j]) > 0)
//             {
//                 strcpy(temp, str[i]);
//                 strcpy(str[i], str[j]);
//                 strcpy(str[j], temp);
//             }
//         }
//     }
//     printf("\nAfter shorting\n");
//     for (i = 0; i < 10; i++)
//     {
//         puts(str[i]);
//     }
//     return 0;
// }

// search the string on the string list
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i, j = 0, n;
//     printf("Enter your number of string : ");
//     scanf("%d", &n);
//     char name[n][20], s[20];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%s", name[i]);
//     }
//     printf("Enter search string : ");
//     gets(s);
//     for (i = 0; i < n; i++)
//     {
//         if (strcmp(s, name[i]) == 0)
//         {
//             j = 1;
//         }
//     }
//     if (j == 1)
//     {
//         printf("Match");
//     }
//     else
//     {
//         printf("Not Match");
//     }
//     return 0;
// }

// palindrome string
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i, j = 0, n;
//     char n1[10], n2[10];
//     printf("Enter your first string : ");
//     scanf("%s", n1);
//     for (i = strlen(n1) - 1; i >= 0; i--)
//     {
//         n2[j] = n1[i];
//         j++;
//     }
//     if (strcmp(n2, n1) == 0)
//     {
//         printf("This is Palindrome number");
//     }
//     else
//     {
//         printf("Thi is not Palindrone number");
//     }
//     return 0;
// }

// 34 Write a C programming to count of each character in a given string.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20];
//     int i, j, k;

//     return 0;
// }

// 34. Write a C programming to convert vowels into upper case character in a given string.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i;
//     char str[20];
//     gets(str);
//     for (i = 0; i < strlen(str); i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         {
//             str[i] = str[i] - 32;
//         }
//     }
//     puts(str);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// void revstr(char str1[])
// {
//     int i, len, temp;
//     len = strlen(str1);
//     for (i = 0; i < len / 2; i++)
//     {
//         temp = str1[i];
//         str1[i] = str1[len - i - 1];
//         str1[len - i - 1] = temp;
//     }
// }
// int main()
// {
//     char str[50];
//     printf(" Enter the string: ");
//     gets(str);
//     printf(" \n Before reversing the string: %s \n", str);
//     revstr(str);
//     printf(" After reversing the string: %s", str);
// }