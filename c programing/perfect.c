#include <stdio.h>
int main()
{
    int num, rev = 0;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            rev = rev + i;
        }
    }
    if (rev == num)
    {
        printf("This is perfect number");
    }
    else
    {
        printf("This is not perfect number");
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int num, sum = 0, temp;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     temp = num;
//     while (num > 0)
//     {
//         sum = sum * 10 + num % 10;
//         num = num / 10;
//     }
//     if (sum == temp)
//     {
//         printf("yes");
//     }
//     else
//     {
//         printf("no");
//     }
//     return 0;
// }