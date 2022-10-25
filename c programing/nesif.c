// #include <stdio.h>
// int main()
// {
//     int num1, num2, num3;
//     printf("Enter your first number : ");
//     scanf("%d", &num1);
//     printf("Enter your second number : ");
//     scanf("%d", &num2);
//     printf("Enter your third number : ");
//     scanf("%d", &num3);
//     if (num1 < num2)
//     {
//         if (num2 < num3)
//         {
//             printf("3rd is largest number");
//         }
//         else
//         {
//             printf("2nd is largest number");
//         }
//     }
//     else
//     {
//         if (num1 < num3)
//         {
//             printf("3rd is largest number");
//         }
//         else
//         {
//             printf("1st is largest number");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num1, num2, num3, num4;
//     printf("Enter your first number : ");
//     scanf("%d", &num1);
//     printf("Enter your second number : ");
//     scanf("%d", &num2);
//     printf("Enter your third number : ");
//     scanf("%d", &num3);
//     printf("Enter your 4rth number : ");
//     scanf("%d", &num3);
//     if (num1 < num2)
//     {
//         if (num2 > num3 && num2 > num4)
//         {
//             printf("1st is largest");
//         }
//         else if (num2 < num3 && num2 > num4 && num3 > num1)
//         {
//             printf("3rd is largest");
//         }
//     }
//     else
//     {
//     }
//     return 0;
// }

#include <stdio.h>
int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int num1, num2, num3, num4;
    printf("Enter your first number : ");
    scanf("%d", &num1);
    printf("Enter your second number : ");
    scanf("%d", &num2);
    printf("Enter your third number : ");
    scanf("%d", &num3);
    printf("Enter your 4rth number : ");
    scanf("%d", &num4);
    int h = max(num1, num2);
    int w = max(num3, num4);
    int p = max(h, w);
    printf("The largest number is %d", p);

    return 0;
}