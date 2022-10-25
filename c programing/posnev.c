#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("This is zero");
    }
    else if (num < 0)
    {
        printf("This is Negative number");
    }
    else
    {
        printf("This is Posative number");
    }

    return 0;
}