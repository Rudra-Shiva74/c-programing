#include <stdio.h>
int main()
{
    int year;
    printf("Enter your birth year year :");
    scanf("%d", &year);
    if ((year % 400) == 0)
        printf("%d is a Leap year.\n", year);
    else if ((year % 100) == 0)
        printf("%d is a Not Leap year.\n", year);
    else if ((year % 4) == 0)
        printf("%d is a Leap year.\n", year);
    else
        printf("%d is Not a Leap year \n", year);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter your birth year year : ");
//     scanf("%d", &year);
//     if ((year % 4) == 0)
//         printf("%d is a Leap year.\n", year);
//     else
//         printf("%d is Not a Leap year \n", year);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int side1, side2, side3;
//     printf("Enter your first side : ");
//     scanf("%d", &side1);
//     printf("Enter your second side : ");
//     scanf("%d", &side2);
//     printf("Enter your third side : ");
//     scanf("%d", &side3);
//     if (side1 == side2 == side3)
//     {
//         printf("This is equilateral triangle");
//     }
//     else
//     {
//         printf("This is not equilateral triangle");
//     }
//     return 0;
// }
