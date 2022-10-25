#include <stdio.h>
#include <string.h>
int main()
{
    int num, i, j, count = 0;
    printf("ENTER YOUR NUMBER : ");
    scanf("%d", &num);
    while (num != 1)
    {
        for (i = 1; i <= num; i++)
        {
            count = 0;
            if (num % i == 0)
            {
                for (j = 1; j <= i; j++)
                {
                    if (i % j == 0)
                    {
                        count++;
                    }
                }
                if (count == 2)
                {
                    printf("%d ", i);
                    num = num / i;
                    break;
                }
            }
        }
    }
    return 0;
}