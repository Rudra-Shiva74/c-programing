#include <stdio.h>
int main()
{
    int num, num2;
    printf("Enter your number : ");
    scanf("%d", &num);
    printf("Enter your number : ");
    scanf("%d", &num2);
    printf("The bitwise opr %d & %d is %d\n", num, num2, num & num2);
    printf("The bitwise opr %d ^ %d is %d\n", num, num2, num ^ num2);
    printf("The bitwise opr %d | %d is %d\n", num, num2, num | num2);
    printf("The bitwise opr << %d  %d is %d\n", num, 2, num << 2);
    printf("The bitwise opr >> %d  %d is %d\n", num, 2, num >> 2);
    return 0;
}