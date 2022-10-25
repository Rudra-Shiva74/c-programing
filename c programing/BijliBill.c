#include <stdio.h>
int main()
{
    int unit, charge = 200;
    printf("Enter your unit : ");
    scanf("%d", &unit);
    if (unit <= 50)
    {
        printf("%d", charge);
    }
    else if (unit > 50 && unit <= 100)
    {
        int unit1 = unit - 50;
        float v = charge + unit1 * 2.5;
        printf("The bilti bill is %f", v);
    }
    else if (unit > 100 && unit <= 150)
    {
        int unit3 = unit - 100;
        float v1 = charge + unit3 * 4 + 50 * 2.5;
        printf("The bilti bill is %f", v1);
    }
    else if (unit > 150)
    {
        int unit4 = unit - 150;
        float v2 = charge + 50 * 4 + 50 * 2.5 + unit4 * 8;
        printf("The bilti bill is %f", v2);
    }
    return 0;
}