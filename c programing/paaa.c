// #include <stdio.h>
// int Abhi(int a)
// {
//     static int n;
//     if (a != 0)
//     {
//         n++;
//         return Abhi(a / 10);
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
//     printf("%d", Abhi(num));
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[20];
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = str[i] - 32;
        }
    }
    puts(str);
    return 0;
}
