// Write a program in C to display the n terms of odd natural number and their sum

// #include <stdio.h>
// int main()
// {
// 	int a, i, sum = 0;
// 	printf("Enter the value : ");
// 	scanf("%d", &a);
// 	for (i = 1; i <= a; i++)
// 	{
// 		if (i % 2 != 0)
// 		{
// 			sum = sum + i;
// 		}
// 	}
// 	printf("The sum of %d\n", sum);

// 	return 0;
// }

// Write a program in C to display the pattern like right angle triangle using an asterisk
// Write a program in C to display the pattern like right angle triangle with a number

// #include <stdio.h>
// int main()
// {
// 	int a, i, j, sum = 0;
// 	printf("Enter the value : ");
// 	scanf("%d", &a);
// 	for (i = 1; i <= a; i++)
// 	{
// 		for (j = 1; j <= i; j++)
// 		{
// 			printf("%d ",j);
// 		}
// 		printf("\n");
// 	}

// 	return 0;
// }

// 7. Write a program in C to display the multiplication table vertically from 1 to n. Go to the editor
// Test Data :
// Input upto the table number starting from 1 : 8
// Expected Output :
// Multiplication table from 1 to 8
// 1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
// ...
// 1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80

// #include <stdio.h>
// int main()
// {
//     int num, num1;
//     printf("Start : ");
//     scanf("%d", &num);
//     printf("End : ");
//     scanf("%d", &num1);
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = num; j <= num1; j++)
//         {
//             printf("%d * %d = %d, ", j, i, j * i);
//         }
//     }
//     return 0;
// }

// 8. Write a program in C to display the n terms of odd natural number and their sum . Go to the editor
// Test Data
// Input number of terms : 10
// Expected Output :
// The odd numbers are :1 3 5 7 9 11 13 15 17 19
// The Sum of odd Natural Number upto 10 terms : 100

// #include <stdio.h>
// int main()
// {
//     int num, sum = 0;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     printf("The odd Number are : ");
//     for (int i = 1; i <= num; i++)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d ", i);
//             sum = sum + i;
//         }
//     }
//     printf("\nThe sum of odd number is : %d", sum);

//     return 0;
// }


// 11) Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row
// The pattern like :

//  1
//  22
//  333
//  4444

// #include <stdio.h>
// int main()
// {
// 	int a, i, j;
// 	printf("Enter the value : ");
// 	scanf("%d", &a);
// 	for (i = 1; i <= a; i++)
// 	{
// 		for (j = 1; j <= i; j++)
// 		{
// 			printf("%d ", i);
// 		}
// 		printf("\n");
// 	}

// 	return 0;
// }

// 12)Write a program in C to make such a pattern like right angle triangle with number increased by 1
// The pattern like :

//    1
//    2 3
//    4 5 6
//    7 8 9 10

// #include <stdio.h>
// int main()
// {
// 	int i, j, a, k = 1;
// 	printf("Enter the value : ");
// 	scanf("%d", &a);
// 	for (i = 1; i <= a; i++)
// 	{
// 		for (j = 1; j <= i; j++)
// 		{
// 			printf("%d ", k++);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

// 13. Write a program in C to make such a pattern like a pyramid with numbers increased by 1
//    1
//   2 3
//  4 5 6
// 7 8 9 10

// #include <stdio.h>
// int main()
// {
// 	int i, j, a, b, l, k = 1;
// 	printf("Enter number of row : ");
// 	scanf("%d", &a);
// 	b = a + 4;
// 	for (i = 1; i <= a; i++)
// 	{
// 		for (j = b; j >= 1; j--)
// 		{
// 			printf(" ");
// 		}
// 		for (l = 1; l <= i; l++)
// 			printf("%d ", k++);
// 			printf("\n");
// 			b--;
// 	}
// 	return 0;
// }

// 14 Write a C program to calculate the factorial of a given number.

// #include <stdio.h>
// int main()
// {
// 	int i, num, mult = 1;
// 	printf("Enter your number : ");
// 	scanf("%d", &num);
// 	for (i = 1; i <= num; i++)
// 		mult = mult * i;
// 		printf("factis %d", mult);
// }

// 16. Write a program in C to display the n terms of even natural number and their sum.

// #include <stdio.h>
// int main()
// {
// 	int i, num, sum = 0;
// 	printf("Enter your number : ");
// 	scanf("%d", &num);
// 	int a = num * 2;
// 	for (i = 1; i <= a; i++)
// 	{
// 		if ((i % 2) == 0)
// 		{
// 			sum = sum + i;
// 		}
// 	}
// 	printf("The sum of %d term even number is %d", num, sum);
// 	return 0;
// }

// 17. Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row.

//    1
//   2 2
//  3 3 3
// 4 4 4 4
// #include <stdio.h>
// int main()
// {
//    int i, j, k, num, spc;
//    printf("Enter your number : ");
//    scanf("%d", &num);
//    spc = num + 5;
//    for (i = 1; i <= num; i++)
//    {
//       for (j = spc; j >= 1; j--)
//       {
//          printf(" ");
//       }
//       for (k = 1; k <= i; k++)
//          printf("* ");
//       printf("\n");
//       spc--;
//    }
//    return 0;
// }

// 19. Write a program in C to display the n terms of harmonic series and their sum.
// #include <stdio.h>
// int main()
// {
//    int i, num;
//    float s=0.0;
//    printf("enter the value : ");
//    scanf("%d", &num);
//    for (i = 1; i <= num; i++)
//    {
//       s=s+1/(float)i;
//    }
//    printf("%f", s);
//    return 0;
// }

// 21. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. Go to the editor
// Test Data :
// Input the number or terms :5
// Expected Output :
// 9 99 999 9999 99999
// The sum of the saries = 111105
// #include <stdio.h>
// int main()
// {
//    int i, j, num, star = 9, sum = 0;
//    printf("Enter your number : ");
//    scanf("%d", &num);
//    for (i = 1; i <= num; i++)
//    {
//       printf("%d ", star);
//       star = star * 10 + 9;
//       sum += star;
//    }
//    printf("The sum is %d", sum);

//    return 0;
// }

// 22. Write a program in C to print the Floyd's Triangle. Go to the editor

// 1
// 01
// 101
// 0101
// 10101
// #include <stdio.h>
// int main()
// {
//    int i, j, k = 0, num;
//    printf("Enter your number : ");
//    scanf("%d", &num);
//    for (i = 1; i <= num; i++)
//    {
//       for (j = 1; j <= i; j++)
//       {
//          k++;
//          printf("%d", k);
//          k--;
//       }
//       printf("\n");
//    }

//    return 0;
// }

// 31. Write a program in C to display the pattern like a diamond. Go to the editor

//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     for (int i = num; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = num - i; k >= 0; k--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for (int l = num; l >= 1; l--)
//     {
//         for (int m = l; m >= 0; m--)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }

//     return 0;
// }
// 55. Write a program in C to convert a decimal number to hexadecimal. Go to the editor
// Test Data :
// Input any Decimal number: 79
// Expected Output :
// The equivalent Hexadecimal Number : 4F

// #include <stdio.h>
// int main()
// {
//    int num, rev = 0;
//    printf("Enter your number : ");
//    scanf("%d", &num);
//    while (num > 0)
//    {
//       rev = num % 16;
//       num = num / 16;
//       if (rev == 15)
//       {
//          printf("F");
//       }
//       else if (rev == 14)
//       {
//          printf("E");
//       }
//       // printf("%d\n", rev);
//    }
//    // printf("%d\n", rev);
//    // printf("%d\n", num);
//    return 0;
// }

// 56. Write a program in C to Check Whether a Number can be Express as Sum of Two Prime Numbers. Go to the editor
// Test Data :
// Input a positive integer: 16
// Expected Output :
// 16 = 3 + 13
// 16 = 5 + 11
// #include<stdio.h>
// int main()
// {
//    int num,a=0;
//    printf("Enter your number : ");
//    scanf("%d",num);
//    for(int i=1;i<=num;i++);

//    return 0;
// }

// 57 Write a program in C to print a string in reverse order. Go to the editor
// Test Data :
// Input a string to reverse : Welcome
// Expected Output :
// Reversed string is: emocleW
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//    char str1[200];
//    printf("Enter your string : ");
//    gets(str1);
//    printf("The rev of string is %s", strrev(str1));

//    return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//    char Abhi[200];
//    printf("Enter your string : ");
//    gets(Abhi);
//    for (int i = strlen(Abhi); i >= 0; i--)
//    {
//       printf("%c", Abhi[i]);
//    }
//    return 0;
// }

// 58. Write a C program to find the length of a string without using the library function. Go to the editor
// Test Data :
// Input a string : welcome
// Expected Output :
// The string contains 7 number of characters.
// So, the length of the string welcome is : 7

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//    char str2[200];
//    printf("Enter your string : ");
//    gets(str2);
//    printf("The lenth of string is %d", strlen(str2));
//    return 0;
// }

// 59. Write a program in C to check Armstrong number of n digits. Go to the editor
// Test Data :
// Input an integer : 1634
// Expected Output :
// 1634 is an Armstrong number
// #include <stdio.h>
// int main()
// {
//    int num, rev = 0;
//    printf("Enter your number : ");
//    scanf("%d", &num);
//    int Abhi = num;
//    while (num > 0)
//    {
//       rev = rev + (num % 10) * (num % 10) * (num % 10);
//       num = num / 10;
//    }
//    if (Abhi == rev)
//    {
//       printf("This is Armstrong number");
//    }
//    else
//    {
//       printf("This is not Armstrong number");
//    }
//    return 0;
// }