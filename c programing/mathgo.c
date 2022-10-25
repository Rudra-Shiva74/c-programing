// 3. Write a C program to divide two integers (dividend and divisor) without using multiplication, division and mod operator.
// #include <stdio.h>
// int main()
// {
//     int num1, num2, i, k = 0;
//     printf("Enter your number 1st  : ");
//     scanf("%d", &num1);
//     printf("Enter your number 2nd  : ");
//     scanf("%d", &num2);
//     if (num1 > 0 && num2 > 0)
//     {
//         for (i = num2; i <= num1; i = i + num2)
//         {
//             k++;
//         }
//     }
//     else if (num1 < 0 && num2 > 0)
//     {
//         for (i = -num2; i >= num1; i = i - num2)
//         {
//             k--;
//         }
//     }
//     else if (num1 > 0 && num2 < 0)
//     {
//         for (i = -num2; i <= num1; i = i - num2)
//         {
//             k--;
//         }
//     }
//     else
//     {
//         for (i = -num2; i <= -num1; i = i - num2)
//         {
//             k++;
//         }
//     }
//     printf("%d", k);
//     return 0;
// }

// frequency of a number
// #include <stdio.h>
// int main()
// {
//     int num, n, i, k = 0;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int sum;
//     printf("Enter number which is you want to count : ");
//     scanf("%d", &n);
//     while (num > 0)
//     {
//         sum = (num % 10);
//         if (sum == n)
//         {
//             k++;
//         }
//         num = num / 10;
//     }
//     printf("%d", k);
//     return 0;
// }

// 10. Write a C program to find the number of trailing zeroes in a given factorial.
// #include <stdio.h>
// int main()
// {
//     int num, sum = 1, k, j = 0;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     for (int i = num; i > 0; i--)
//     {
//         sum *= i;
//     }
//     if (sum > 24)
//     {
//         while (sum > 0)
//         {
//             k = sum % 10;
//             if (k == 0)
//             {
//                 j++;
//             }
//             sum = sum / 10;
//         }
//         printf("There are %d zero(0)", j);
//     }
//     else
//     {
//         printf("There are no zero(0)");
//     }
//     return 0;
// }

// 11. Write a C program to count the total number of digit 1 appearing in all positive integers less tha
// #include <stdio.h>
// int main()
// {
//     int num, temp, k, temp2, j = 0, i;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     temp = num;
//     for (i = 1; i <= num; i++)
//     {
//         temp2 = i;
//         while (i > 0)
//         {
//             k = i % 10;
//             if (k == 1)
//             {
//                 j++;
//             }
//             i = i / 10;
//         }
//         i = temp2;
//     }
//     printf("%d", j);
//     return 0;
// }

// Q14.Write a C programming to add repeatedly all digits of a given non-negative number until the result has
// Example:
// Input: 48
// Output: 2
// Explanation: The formula is like: 4 + 8 = 12, 1 + 2 = 3.
// #include <stdio.h>
// int main()
// {
//     int num, k = 0, i, n = 0, l = 0;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     while (num > 0)
//     {
//         k = k + num % 10;
//         num = num / 10;
//     }
//     if (k > 9)
//     {
//         while (k > 0)
//         {
//             n = n + k % 10;
//             k = k / 10;
//         }
//         if (n > 9)
//         {
//             while (n > 0)
//             {
//                 l = l + n % 10;
//                 n = n / 10;
//             }
//             printf("%d", l);
//         }
//         else
//         {
//             printf("%d", n);
//         }
//     }
//     else
//     {
//         printf("%d", k);
//     }
//     return 0;
// }

// 13. Write a C programming to check if a given integer is a power of three.
// #include <stdio.h>
// int main()
// {
//     int num, k = 0;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     while (num > 0)
//     {
//         k = k + num % 3;
//         num = num / 3;
//     }
//     if (k == 1)
//     {
//         printf("yes");
//     }
//     else
//     {
//         printf("no");
//     }
//     return 0;
// }

// 20. Write a C program to multiply two integers without using multiplication, division, bitwise operators, and loops. 
// #include <stdio.h>
// int multi(int a, int b)
// {
//     if (b == 0)
//     {
//         return b;
//     }
//     else if (a > 0 && b > 0)
//     {
//         return a + multi(a, b - 1);
//     }
// }
// int main()
// {
//     int num1, num2;
//     printf("Enter your 1st number : ");
//     scanf("%d", &num1);
//     printf("Enter your 2nd number : ");
//     scanf("%d", &num2);
//     printf("The multiplication of without using"
//            " * "
//            ","
//            " / "
//            " bitwise and loop : %d",
//            multi(num1, num2));
//     return 0;
// }

// 21. Write a C program to calculate and print average (or mean) of the stream of given numbers. Go to the editor
// Example 1:
// Input:
// arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}
// Output:
// Average of 1 numbers is 10.000000
// Average of 2 numbers is 15.000000
// Average of 3 numbers is 20.000000
// #include <stdio.h>
// int main()
// {
//     int num, i, num2;
//     float sum = 0;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int arr[num];
//     for (i = 0; i < num; i++)
//     {
//         printf("Element %d : ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter how many element avg u want : ");
//     scanf("%d", &num2);
//     for (i = 0; i <= num2; i++)
//     {
//         sum = sum + arr[i];
//     }
//     num2 = num2 + 1;
//     float avg = sum / num2;
//     printf("%f", avg);
//     return 0;
// }

// 22. Write a C program to count the numbers without digit 7, from 1 to a given number
// #include <stdio.h>
// int main()
// {
//     int num, i, temp, sum, k = 0;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         temp = i;
//         while (i > 0)
//         {
//             sum = i % 10;
//             if (sum == 7)
//             {
//                 k++;
//                 break;
//             }
//             i = i / 10;
//         }
//         i = temp;
//     }
//     printf("%d", num - k);
//     return 0;
// }

// 23. Write a C program to find next smallest palindrome of a given number. Go to the editor
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int num, sum = 0, temp;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     num = num + 1;
//     while (1)
//     {
//         temp = num;

//         while (num > 0)
//         {
//             sum = (sum * 10) + num % 10;
//             num = num / 10;
//         }
//         num = temp;
//         if (sum == num)
//         {
//             printf("%d", sum);
//             exit(0);
//         }
//         sum = 0;
//         num++;
//     }
//     return 0;
// }

// 25. Write a C program to print all prime factors of a given number. Go to the editor
// Example 1:
// Input: n = 75
// Output: All prime factors of 75 are: 3 5 5
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int num, i;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     printf("Your all prime factor is : ");
//     if (num > 0)
//     {
//         while (num % 2 == 0)
//         {
//             printf("2 ");
//             num = num / 2;
//         }
//         for (i = 3; i <= sqrt(num); i = i + 2)
//         {
//             if (num % i == 0)
//             {
//                 printf("%d ", i);
//                 num = num / i;
//             }
//         }
//         if (num > 2)
//         {
//             printf("%d", num);
//         }
//     }
//     return 0;
// }

// 28. Write a C program to find angle between given hour and minute hands. Go to the editor
// Example 1:
// Input: int ha = 11
// int ma = 30 Output: Angle between hour and minute hands 165
// #include <stdio.h>
// int main()
// {
//     int HR, min;
//     printf("Enter your Hour : ");
//     scanf("%d", &HR);
//     printf("Enter your Minute : ");
//     scanf("%d", &min);
//     float k = 5.5 * min;
//     float angle = (30 * HR) - k;
//     if (angle < -180)
//     {
//         printf("Your Angle is %f", 360 + angle);
//     }
//     else if (angle < 0)
//     {
//         printf("Your Angle is %f", -angle);
//     }
//     else if (angle > 180)
//     {
//         printf("Your Angle is %f", 360 - angle);
//     }
//     else
//     {
//         printf("Your Angle is %f", angle);
//     }
//     return 0;
// }

// 29 write a c program to print the fibonachi number
// #include <stdio.h>
// int main()
// {
//     int num, i;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     int x = 0, b = 1;
//     for (i = 1; i < num - 1; i++)
//     {
//         b = x + b;
//         x = (x + b) - x;
//     }
//     printf("%d", x);
//     return 0;
// }

// write a program to print lexicographi number
// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// int main()
// {
//     int n, m, j, i = 1;
//     printf("Enter your number : ");
//     scanf("%d", &n);
//     while (i <= 9)
//     {
//         j = 1;
//         while (j <= n)
//         {
//             m = 0;
//             while (m < j)
//             {
//                 if ((m + j * i) <= n)
//                 {
//                     printf("%d ", m + j * i);
//                 }
//                 m++;
//             }
//             j = j * 10;
//         }
//         i++;
//     }
//     return 0;
// }

// write a c program to check a number is fibonacy or not
// #include <stdio.h>
// #include <string.h>
// int fibonacy(int a)
// {
//     if (a == 1 || a == 2)
//     {
//         return a - 1;
//     }
//     else
//     {
//         return fibonacy(a - 2) + fibonacy(a - 1);
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     printf("%d", fibonacy(num));
//     return 0;
// }

// check Email Right or wrong
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//     int i, j, k = 0, l = 0;
//     char Email[100];
//     char email[10] = "gmail.com";
//     printf("Enter your Email : ");
//     gets(Email);
//     for (i = 0; i < strlen(Email); i++)
//     {
//         if (Email[i] >= 'A' && Email[i] <= 'Z')
//         {
//             printf("Wrong Email");
//             exit(0);
//         }
//     }
//     for (i = 0; i < strlen(Email); i++)
//     {
//         if (Email[i] == ' ')
//         {
//             printf("Wrong Email");
//             exit(0);
//         }
//     }
//     for (i = 0; j < strlen(Email); i++)
//     {
//         if (Email[i] == '@')
//         {
//             break;
//         }
//     }
//     for (j = i; j < strlen(Email); j++)
//     {
//         if (Email[j] == email[k])
//         {
//             k++;
//         }
//     }
//     if (k == strlen(email))
//     {
//         printf("Right Email");
//     }
//     else
//     {
//         printf("Wrong Email");
//     }
//     return 0;
// }

// Q34: Write a program in C to calculate the power of any number using recursion.
// Test Data :
// Input the base value : 2
// Input the value of power : 6
// Expected Output :
// The value of 2 to the power of 6 is : 64
// #include <stdio.h>
// int pow1(int a, int b)
// {
//     if (b == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return a * pow1(a, b - 1);
//     }
// }
// int main()
// {
//     int num, power, i;
//     int sum = 1;
//     printf("Enter your base number : ");
//     scanf("%d", &num);
//     printf("Enter your power number : ");
//     scanf("%d", &power);
//     printf("Answer is %d", pow1(num, power));
//     return 0;
// }

// Q33: Write a program in C to convert a decimal number to binary using recursion.
// Test Data :
// Input any decimal number : 66
// Expected Output :
// The Binary value of decimal no. 66 is : 1000010
// #include <stdio.h>
// int binary(int n)
// {
//     if (n == 0)
//         return 0;
//     else
//         return ((n % 2) + 10 * binary(n / 2));
// }
// int main()
// {
//     int num;
//     printf("Enter a decimal number : ");
//     scanf("%d", &num);
//     printf("Decimal(%d) = Binary(%d)\n", num, binary(num));
//     return 0;
// }

// Q28: Write a program in C to count the digits of a given number using recursion.
// Test Data :
// Input a number : 50
// Expected Output :
// The number of digits in the number is :  2
// #include <stdio.h>
// int count(int a)
// {
//     static int c;
//     if (a > 0)
//     {
//         c++;
//         count(a / 10);
//     }
//     else
//     {
//         return c;
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     printf("The number of digits in the number is : %d", count(num));
//     return 0;
// }

// Q29: Write a program in C to find the sum of digits of a number using recursion.
// Test Data :
// Input any number to find sum of digits: 25
// Expected Output:
// The Sum of digits of 25 = 7
// #include <stdio.h>
// int sum(int a)
// {
//     if (a == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return a % 10 + sum(a / 10);
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     printf("%d", sum(num));
//     return 0;
// }

// Q30:Write a program in C to find GCD of two numbers using recursion.
// Test Data :
// Input 1st number: 10
// Input 2nd number: 50
// Expected Output :
// The GCD of 10 and 50 is: 10
// #include <stdio.h>
// int GCD(int a, int b)
// {
//     if (a != b)
//     {
//         if (a > b)
//         {
//             return GCD(a - b, b);
//         }
//         else
//         {
//             return GCD(a, b - a);
//         }
//     }
//     else
//     {
//         return a;
//     }
// }
// int main()
// {
//     int num1, num2;
//     printf("Enter your 1st number : ");
//     scanf("%d", &num1);
//     printf("Enter your 2nd number : ");
//     scanf("%d", &num2);
//     printf("GCD is : %d", GCD(num1, num2));
//     return 0;
// }

// // Q31: Write a program in C to get the largest element of an array using recursion

// #include <stdio.h>
// #include <windows.h>
// #include <stdlib.h>
// #include <conio.h>
// #include <time.h>

// #define N 20
// #define M 40

// int i, j, Field[N][M], x, y, Gy, Head, Tail, Game, Frogs, a, b, var, dir, score, HighScore, Speed;

// FILE *f;

// void snakeInitialization()
// {
//     f = fopen("highscore.txt", "r");
//     fscanf(f, "%d", &HighScore);
//     fclose(f);

//     for (i = 0; i < N; i++)
//     {
//         for (j = 0; j < M; j++)
//         {
//             Field[i][j] = 0;
//         }
//     }

//     x = N / 2;
//     y = M / 2;
//     Gy = y;
//     Head = 5;
//     Tail = 1;
//     Game = 0, Frogs = 0, dir = 'd', score = 0, Speed = 99;

//     for (i = 0; i < Head; i++)
//     {
//         Gy++;
//         Field[x][Gy - Head] = i + 1;
//     }
// }

// void print()
// {
//     for (i = 0; i <= M + 1; i++)
//     {
//         if (i == 0)
//         {
//             printf("%c", 201);
//         }
//         else if (i == M + 1)
//         {
//             printf("%c", 187);
//         }
//         else
//         {
//             printf("%c", 205);
//         }
//     }
//     printf("   Current Score: %d  HighScore: %d", score, HighScore);
//     printf("\n");

//     for (i = 0; i < N; i++)
//     {
//         printf("%c", 186);

//         for (j = 0; j < M; j++)
//         {
//             if (Field[i][j] == 0)
//                 printf(" ");
//             if (Field[i][j] > 0 && Field[i][j] != Head)
//                 printf("%c", 176);
//             if (Field[i][j] == Head)
//                 printf("%c", 178);
//             if (Field[i][j] == -1)
//                 printf("%c", 15);
//             if (j == M - 1)
//                 printf("%c\n", 186);
//         }
//     }

//     for (i = 0; i <= M + 1; i++)
//     {
//         if (i == 0)
//         {
//             printf("%c", 200);
//         }
//         else if (i == M + 1)
//         {
//             printf("%c", 188);
//         }
//         else
//         {
//             printf("%c", 205);
//         }
//     }
// }
// void ResetScreenPosition()
// {
//     HANDLE hOut;
//     COORD Position;
//     hOut = GetStdHandle(STD_OUTPUT_HANDLE);
//     Position.X = 0;
//     Position.Y = 0;
//     SetConsoleCursorPosition(hOut, Position);
// }

// void Random()
// {
//     srand(time(0));
//     a = 1 + rand() % 18;
//     b = 1 + rand() % 38;

//     if (Frogs == 0 && Field[a][b] == 0)
//     {
//         Field[a][b] = -1;
//         Frogs = 1;
//         if (Speed > 10 && score != 0)
//             Speed = Speed - 5;
//     }
// }

// int getch_noblock()
// {
//     if (_kbhit())
//         return _getch();
//     else
//         return -1;
// }

// void movement()
// {
//     var = getch_noblock();
//     var = tolower(var);

//     if (((var == 'd' || var == 'a') || (var == 'w' || var == 's')) && (abs(dir - var) > 5))
//         dir = var;
//     if (dir == 'd')
//     {
//         y++;
//         if (y == M - 1)
//             y = 0;
//         if (Field[x][y] != 0 && Field[x][y] != -1)
//             GameOver();
//         if (Field[x][y] == -1)
//         {
//             Frogs = 0;
//             score += 5;
//             Tail -= 1;
//         }

//         Head++;
//         Field[x][y] = Head;
//     }

//     if (dir == 'a')
//     {
//         y--;
//         if (y == 0)
//             y = M - 1;
//         if (Field[x][y] != 0 && Field[x][y] != -1)
//             GameOver();
//         if (Field[x][y] == -1)
//         {
//             Frogs = 0;
//             score += 5;
//             Tail -= 1;
//         }
//         Head++;
//         Field[x][y] = Head;
//     }

//     if (dir == 'w')
//     {
//         x--;
//         if (x == -1)
//             x = N - 1;
//         if (Field[x][y] != 0 && Field[x][y] != -1)
//             GameOver();
//         if (Field[x][y] == -1)
//         {
//             Frogs = 0;
//             score += 5;
//             Tail -= 1;
//         }
//         Head++;
//         Field[x][y] = Head;
//     }

//     if (dir == 's')
//     {
//         x++;
//         if (x == N - 1)
//             x = 0;
//         if (Field[x][y] != 0 && Field[x][y] != -1)
//             GameOver();
//         if (Field[x][y] == -1)
//         {
//             Frogs = 0;
//             score += 5;
//             Tail -= 1;
//         }
//         Head++;
//         Field[x][y] = Head;
//     }
// }

// void TailRemove()
// {
//     for (i = 0; i < N; i++)
//     {
//         for (j = 0; j < M; j++)
//         {
//             if (Field[i][j] == Tail)
//             {
//                 Field[i][j] = 0;
//             }
//         }
//     }
//     Tail++;
// }

// void GameOver()
// {
//     printf("\a");
//     Sleep(1500);
//     system("Cls");

//     if (score > HighScore)
//     {
//         printf("  New HighScore %d!!!!!!\n\n", score);
//         system("pause");
//         f = fopen("highscore.txt", "w");
//         fprintf(f, "%d", score);
//         fclose(f);
//     }

//     system("Cls");
//     printf("\n\n         GAME OVER !!!!!!\n");
//     printf("             Score : %d \n\n", score);
//     printf("             Press ENTER to play again or ESC to exit ... \n");

//     while (1)
//     {
//         var = getch_noblock();
//         if (var == 13)
//         {
//             Game = 0;
//             snakeInitialization();
//             break;
//         }
//         else if (var == 27)
//         {
//             Game = 1;
//             break;
//         }
//     }
//     system("Cls");
// }
// void main()
// {
//     snakeInitialization();

//     while (Game == 0)
//     {
//         print();
//         ResetScreenPosition();
//         Random();
//         movement();
//         TailRemove();
//         Sleep(Speed);
//     }
// }