#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your char : ");
    scanf("%c", &ch);
    int as = ch - 32;
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c", as);
    }
    else
    {
        as = ch + 32;
        printf("%c", as);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     char i = 'a';
//     printf("%c", i - 49);
//     return 0;
// }