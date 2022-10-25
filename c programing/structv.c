// #include <stdio.h>
// #include <stdlib.h>
// struct student
// {
//     int a;
//     char c;
// };
// int main()
// {
//     int i, num;
//     printf("Enter your size of structure : ");
//     scanf("%d", &num);
//     struct student Abhis[num];
//     for (i = 0; i < num; i++)
//     {
//         fflush(stdin);
//         printf("for student %d\n", i + 1);
//         scanf("%c", &Abhis[i].c);
//         scanf("%d", &Abhis[i].a);
//     }
//     return 0;
// }

// pointer in structure in c
// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     int name;
//     char nam[20];
// };
// struct student Abhi = {34, "Abhishek"};
// int main()
// {
//     struct student *ptr = &Abhi;
//     printf("%d", ptr->name);
//     return 0;
// }

// link structure
// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     char name[20];
//     int roll;
//     int mark;
//     struct student *link;
// };
// int main()
// {
//     struct student s1, s2;
//     strcpy(s1.name, "Abhishek");
//     s1.roll = 34;
//     s1.mark = 67;
//     s1.link = NULL;
//     strcpy(s2.name, "Abhi");
//     s2.roll = 34;
//     s2.mark = 67;
//     s2.link = NULL;
//     s1.link = &s2;
//     s2.link = &s1;
//     printf("s2data1=%s\n", s1.link->name);
//     printf("s2data1=%d", s2.link->mark);
//     return 0;
// }

// 3 struture in c with link
// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     char name[20];
//     int roll;
//     int mark;
//     struct student *front;
//     struct student *rev;
// };
// int main()
// {
//     struct student s1, s2, s3;
//     strcpy(s1.name, "Abhishek");
//     s1.roll = 3;
//     s1.mark = 6;
//     s1.front = NULL;
//     strcpy(s2.name, "Abhi");
//     s2.roll = 4;
//     s2.mark = 7;
//     s2.front = NULL;
//     s2.rev = NULL;
//     strcpy(s3.name, "AbhiTiwari");
//     s3.roll = 34;
//     s3.mark = 67;
//     s3.front = NULL;
//     s1.rev = &s3;
//     s1.front = &s2;
//     s2.front = &s3;
//     s3.rev = &s2;
//     s2.rev = &s1;
//     printf("s2 %d\n", s1.front->mark);
//     printf("s2 %d", s3.rev->rev->mark);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     int a;
//     char b;
//     char c[90];
//     int d[30];
// };
// int main()
// {
//     struct student Abhi;
//     printf("%d", sizeof(struct student));
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     int roll;
//     struct student *next;
// };
// int main()
// {
//     struct student s1, s2;
//     s1.roll = 545;
//     s2.roll = 345;
//     struct student *ptr;
//     ptr = &s1;
//     s1.next = &s2;
//     printf("%d", ptr->next->roll);
//     printf("\n%d", (*ptr).next->roll);
//     return 0;
// }

// #include <stdio.h>
// typedef struct complex
// {
//     float real;
//     float imag;
// } complex;
// complex addition(complex num1, complex num2);
// int main()
// {
//     complex num1, num2, value;
//     printf("entering real and imag parts of first complex no:\n ");
//     scanf("%f %f", &num1.real, &num1.imag);
//     printf("entering real and imag parts of second complex no:\n ");
//     scanf("%f %f", &num2.real, &num2.imag);
//     value = addition(num1, num2);
//     printf("result = %.1f + %.1fi", value.real, value.imag);
//     return 0;
// }
// complex addition(complex num1, complex num2)
// {
//     complex temp;
//     temp.real = num1.real + num2.real;
//     temp.imag = num1.imag + num2.imag;
//     return (temp);
// }

#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node s1, s2;
    s1.data = 45;
    s2.data = 56;
    s1.next = &s2;
    s2;
    return 0;
}