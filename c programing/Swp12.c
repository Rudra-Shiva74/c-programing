#include <stdio.h>
#include <time.h>
int Abhishek(int *a, int *b)
{
    *a = 100;
    *b = 90;
}
int main()
{
    clock_t start, end;
    double execution_time;
    start = clock();
    int x = 90, y = 100;
    printf("After swapping the value is %d : %d\n", x, y);
    Abhishek(&x, &y);
    printf("Before swapping the value is %d : %d\n", x, y);
    end = clock();
    execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time is %f", execution_time);
    return 0;
}