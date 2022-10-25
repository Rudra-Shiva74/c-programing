// This is for malloc function in c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int num;
    int *ptr, i, *ptr2, *ptr3, *ptr4, *ptr5;
    // printf("Enter your number : ");
    // scanf("%d", &num); 
    ptr = (int *)malloc(sizeof(int));
    printf("Enter your values --> \n");
    scanf("%d", ptr);
    ptr2 = (int *)malloc(sizeof(int));
    printf("Enter your values --> \n");
    scanf("%d", ptr2);
    ptr3 = (int *)malloc(sizeof(int));
    printf("Enter your values --> \n");
    scanf("%d", ptr3);
    ptr4 = (int *)malloc(sizeof(int));
    printf("Enter your values --> \n");
    scanf("%d", ptr4);
    ptr5 = (int *)malloc(sizeof(int));
    printf("Enter your values --> \n");
    scanf("%d", ptr5);

    printf("\n%d", *(ptr) + *(ptr2) + *(ptr3) + *(ptr4) + *(ptr5));
    free(ptr);
    free(ptr2);
    free(ptr3);
    free(ptr4);
    free(ptr5);
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int num, *ptr, *ptr2, i;
//     printf("Enter your size of arr : ");
//     scanf("%d", &num);
//     ptr = (int *)malloc(num * sizeof(int));
//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", (ptr + i));
//     }
//     for (i = 0; i < num; i++)
//     {
//         printf("%d", *(ptr + i));
//     }
//     return 0;
// }

// This is for calloc funtion in c
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int num, *ptr, i;
//     printf("Enter your number  :");
//     scanf("%d", &num);
//     ptr = (int *)calloc(num, sizeof(int));
//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", (ptr + i));
//     }
//     for (i = 0; i < num; i++)
//     {
//         printf("%d ", *(ptr + i));
//     }
//     return 0;
// }

// use of realoc function in c
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int num, i, *ptr;
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     ptr = (int *)malloc(num * sizeof(int));
//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", (ptr + i));
//     }
//     printf("Enter your expned value : ");
//     scanf("%d", &num);
//     int *ptr1 = (int *)realloc(ptr, num * sizeof(int));
//     printf("your previeos adress %d and new adress %d\n", ptr, ptr1);
//     for (i = 0; i < num; i++)
//     {
//         printf("%d ", *(ptr + i));
//     }
//     return 0;
// }

// #include <stdio.h>
// typedef struct complex
// {
//     float real;
//     float imag;
// } complex;

// complex add(complex n1, complex n2);
// int main()
// {
//     complex n1, n2, result;
//     printf("For 1st complex number \n");
//     printf("Enter the real and imaginary parts: ");
//     scanf("%f %f", &n1.real, &n1.imag);
//     printf("\nFor 2nd complex number \n");
//     printf("Enter the real and imaginary parts: ");
//     scanf("%f %f", &n2.real, &n2.imag);
//     result = add(n1, n2);
//     printf("Sum = %.1f + %.1fi", result.real, result.imag);
//     return 0;
// }

// complex add(complex n1, complex n2)
// {
//     complex temp;
//     temp.real = n1.real + n2.real;
//     temp.imag = n1.imag + n2.imag;
//     return (temp);
// }
// #include <stdio.h>
// #include <string.h>
// int num(int *ptr)
// {
//     int i;
//     for (i = 0; i < 3; i++)
//     {
//         printf("%d ", ptr[i]);
//     }
// }
// int main()
// {
//     int Abhi[] = {12, 34, 456};
//     num(Abhi);
//     return 0;
// }