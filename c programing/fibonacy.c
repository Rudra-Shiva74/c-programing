#include <stdio.h>
int recursive(int a)
{
    if (a == 1 || a == 2)
    {
        return a - 1;
    }
    else
    {
        return recursive(a - 1) + recursive(a - 2);
    }
}
// int itarative(int a)
// {
//     int x = 0;
//     int b = 1;
//     for (int i = 1; i < a - 1; i++)
//     {
//         b = x + b;
//         x = (x + b) - x;
//     }
//     return x;
// }
int main()
{
    int n;
    printf("Enter the index to get the fibonacy series : ");
    scanf("%d", &n);
    // printf("The value of fibonacy number at position no %d using itarative aproch is %d\n", n, itarative(n));
    printf("The value of fibonacy number at position no %d using recursive aproch is %d\n", n, recursive(n));

    return 0;
}