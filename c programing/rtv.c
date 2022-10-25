#include <stdio.h>
#include <string.h>
int main()
{
    char Arr[20];
    printf("Enter your string : ");
    gets(Arr);
    for (int i = 0; i < strlen(Arr); i++)
    {
        if (Arr[i] == 'a' || Arr[i] == 'e' || Arr[i] == 'i' || Arr[i] == 'o' || Arr[i] == 'u')
        {
            continue;
            // printf("%c", Arr[i]);
        }
        printf("%c", Arr[i]);
    }
    return 0;
}
