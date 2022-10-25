// 1. Write a program in C to print first 50 natural numbers using recursion. Go to the editor
// Expected Output:

//  The natural numbers are : 1  2  3
//   4  5  6  7  8  9  10  11  12  13
//   14  15  16  17  18  19  20  21
// 22  23  24  25  26  27  28  29  30
//   31  32  33  34  35  36  37  38
// 39  40  41  42  43  44  45  46  47
//   48  49  50

// #include <stdio.h>

// int Abhi(int a, int b)
// {
//     if (a <= b)
//     {
//         printf("%d\n", a);
//         Abhi(a + 1, b);
//     }
// }
// int main()
// {
//     int num = 1, num1;
//     printf("Enter your number : ");
//     scanf("%d", &num1);
//     Abhi(num, num1);
//     return 0;
// }

// 2. Write a program in C to calculate the sum of numbers from 1 to n using recursion. Go to the editor
// Test Data :
// Input the last number of the range starting from 1 : 5
// Expected Output:

// The sum of numbers from 1 to 5 :
// 15
#include <stdio.h>
int Abhi(int a)
{
    if (a == 0)
    {
        return a;
    }
    else
    {
        return a + Abhi(a - 1);
    }
}
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    printf("%d", Abhi(num));
    return 0;
}

// 3. Write a program in C to Print Fibonacci Series using recursion. Go to the editor
// Test Data :
// Input number of terms for the Series (< 20) : 10
// Expected Output:

//  Input number of terms for the Series (< 20) : 10
//  The Series are :
//  1  1  2  3  5  8  13  21  34  55
// #include <stdio.h>
// int Abhi(int a)
// {
//     if (a == 2 || a == 1)
//     {
//         return a-1;
//     }
//     else
//     {
//         return Abhi(a - 2) + Abhi(a - 1);
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     printf("%d", Abhi(num));
//     return 0;
// }

// 4. Write a program in C to print the array elements using recursion. Go to the editor
// Test Data :
// Input the number of elements to be stored in the array :6
// Input 6 elements in the array :
// element - 0 : 2
// element - 1 : 4
// element - 2 : 6
// element - 3 : 8
// element - 4 : 10
// element - 5 : 12
// Expected Output :

// The elements in the array are : 2  4  6  8  10  12

// #include <stdio.h>
// int Abhi(int a[], int s, int l)
// {
//     if (s >= l)
//     {
//         printf("%d", a[s]);
//         return Abhi(a, s + 1, l);
//     }
// }
// int main()
// {
//     int arr[100];
//     int n, i;
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     for (i = 0; i <= num; i++)
//     {
//         printf("Element - %d : ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("The elements in the array are : ");
//     Abhi(arr, 0, num);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, n, i;
//     printf("Enter how many you take input : ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         printf("\nEnter your number : ");
//         scanf("%d", &num);
//     }
//     // printf("%d",i);
//     return 0;
// }

// 5. Write a program in C to count the digits of a given number using recursion. Go to the editor
// Test Data :
// Input a number : 50
// Expected Output :

// The number of digits in the number is :  2

// #include <stdio.h>
// int fun(int a)
// {
//     static int n;
//     if (a != 0)
//     {
//         n++;
//         return fun(a / 10);
//     }
//     else
//     {
//         return n;
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     printf("%d", fun(num));
//     return 0;
// }

// 6. Write a program in C to find the sum of digits of a number using recursion. Go to the editor
// Test Data :
// Input any number to find sum of digits: 25
// Expected Output:

// The Sum of digits of 25 = 7
// #include <stdio.h>
// int Abhi(int a)
// {
//     if (a == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return ((a % 10) + Abhi(a / 10));
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     printf("%d", Abhi(num));

//     return 0;
// }

// 7. Write a program in C to find GCD of two numbers using recursion. Go to the editor
// Test Data :
// Input 1st number: 10
// Input 2nd number: 50
// Expected Output :

// The GCD of 10 and 50 is: 10

// #include <stdio.h>
// int fun(int a, int b)
// {
//     if (a != b)
//     {
//         if (a > b)
//             return fun(a - b, b);
//         else
//             return fun(a, b - a);
//     }
//     return b;
// }
// int main()
// {
//     int num1, num2;
//     printf("Enter your First number : ");
//     scanf("%d", &num1);
//     printf("Enter your Second number : ");
//     scanf("%d", &num2);
//     printf("%d", fun(num1, num2));
//     return 0;
// }
// 20. Write a program in C to find the first capital letter in a string using recursion. Go to the editor
// Test Data :
// Input a string to including one or more capital letters : testString
// Expected Output :

// The first capital letter appears in the string testString is S.
// #include <stdio.h>
// #include <string.h>
// int rec(char array[])
// {
//     if(isupper(array[i])){

//     }
// }
// int main()
// {
//     char array[100];
//     printf("Enter your String : ");
//     gets(array);
//     printf("%s", array);
//     for (int i = 0; i < strlen(array); i++)
//     {
//         printf("%c", array[i]);
//     }
//     return 0;
// }

// 21. Write a program in C for binary search using recursion. Go to the editor
// Test Data :
// Input the number of elements to store in the array :3
// Input 3 numbers of elements in the array in ascending order :
// element - 0 : 15
// element - 1 : 25
// element - 2 : 35
// Input the number to search : 35
// Expected Output :

//  The search number found in the array.

// #include <stdio.h>
// int main()
// {
//     int num, num2;
//     printf("Enter How many number you want : ");
//     scanf("%d", &num);
//     int Array[num];
//     for (int i = 0; i < num; i++)
//     {
//         printf("Your %d position number is ", i);
//         scanf("%d", &Array[i]);
//     }
//     printf("Enter your number which you know the position : ");
//     scanf("%d", &num2);
//     for (int j = 0; j < num; j++)
//     {
//         if (num2 == Array[j])
//         {
//             printf("The position is %d", j);
//         }
//     }
//     return 0;
// }