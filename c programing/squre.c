#include <stdio.h>
int main()
{
    int a;
    // printf("Enter the value : ");
    // scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the value : ");
        scanf("%d", &a);
    if ((a % 2) == 0)
        {
            printf("%d ^ %d = %d\n", a, a, a * a);
        }
    }

    return 0;
}