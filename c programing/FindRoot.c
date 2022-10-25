#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float x, m;
    printf("Enter your a value : ");
    scanf("%d", &a);
    printf("Enter your b value : ");
    scanf("%d", &b);
    printf("Enter your c value : ");
    scanf("%d", &c);
    x = -(b + sqrt(b * b - 4 * a * c)) / (2 * a);
    m = -(b - sqrt(b * b - 4 * a * c)) / (2 * a);
    printf("%f\n", x);
    printf("%f", m);
    return 0;
}