// 1. Write a C program to find the position of a target value within a sorted array using Binary search.
#include <stdio.h>
int main()
{
    int num, num2;
    printf("enter How many number you want : ");
    scanf("%d", &num);
    int Array[num];
    for (int i = 0; i < num; i++)
    {
        printf("Your %d position number is ", i);
        scanf("%d", &Array[i]);
    }
    printf("Enter your number which you know the position : ");
    scanf("%d", &num2);
    for (int j = 0; j < num; j++)
    {
        if (num2 == Array[j])
        {
            printf("The position is %d", j);
        }
    }
    return 0;
}