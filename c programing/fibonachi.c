// #include <stdio.h>
// int rec(int a)
// {
//     if (a == 1 || a == 2)
//     {
//         return a - 1;
//     }
//     else
//     {
//         return rec(a - 1) + rec(a - 2);
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     printf("The recursion is %d", rec(num));
//     return 0;
// }

// #include <stdio.h>
// int fac(int a)
// {
//     if (a == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return (a * fac(a - 1));
//     }
// }

// int main()
// {
//     long num;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     printf("The recursion is %d", fac(num));
//     return 0;
// }

// #include <stdio.h>
// int Abhi(int a)
// {
//     if (a == 1)
//     {
//         return a;
//     }
//     else
//     {
//         return (a * Abhi(a - 1));
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