// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("test.txt", "r");
//     char ch;

//     while (ch != EOF)
//     {
//         ch = fgetc(ptr);
//         printf("%c", ch);
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     char ch;
//     FILE *file, *copy;
//     file = fopen("test.txt", "r");
//     if (file == NULL)
//     {
//         exit(0);
//     }
//     copy = fopen("copy.txt", "w");
//     while ((ch = fgetc(file)) != EOF)
//     {
//         fputc(ch, copy);
//     }
//     printf("file is copied\n");
//     fclose(file);
//     fclose(copy);
//     return 0;
// }

// write 10 student detail in file
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     char name[50];
//     int marks, i, n;
//     printf("Enter number of students: ");
//     scanf("%d", &n);
//     FILE *fptr;
//     fptr = (fopen("tudent.txt", "w"));
//     if (fptr == NULL)
//     {
//         printf("Error!");
//         exit(0);
//     }
//     for (i = 0; i < n; ++i)
//     {
//         fflush(stdin);
//         printf("For student%d\nEnter name: ", i + 1);
//         gets(name);
//         printf("Enter marks: ");
//         scanf("%d", &marks);
//         fprintf(fptr, "\nName: %s \nMarks=%d \n", name, marks);
//     }
//     fclose(fptr);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char buff[100];
//     FILE *ptr = NULL;
//     ptr = fopen("tudent.txt", "r");
//     fscanf(ptr, "%s", buff);
//     return 0;
// }

// 1. Write a program in C to create and store information in a text file.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char ch[] = "abhishek tiwari";
//     ptr = fopen("text.txt", "r+");
//     return 0;
// }

// write a program in c to print n number of student details
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int num, Roll, tm, i;
//     char name[20], temp;
//     printf("Enter your number of student : ");
//     scanf("%d", &num);
//     FILE *ptr = NULL;
//     ptr = fopen("write.txt", "w");
//     for (i = 1; i <= num; i++)
//     {
//         scanf("%c", &temp);
//         printf("%d\nEnter your student name : ", i);
//         gets(name);
//         printf("Enter Roll number : ");
//         scanf("%d", &Roll);
//         fprintf(ptr, "%s\n%d\n", name, Roll);
//     }
//     fclose(ptr);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char ch[500];
//     ptr = fopen("write.txt", "r+");
//     fgets(ch, 50, ptr);
//     printf("%s", ch);
//     fclose(ptr);
//     return 0;
// }

// Write a program in C to write multiple lines in a text file.
// #include <stdio.h>
// #include <windows.h>
// int main()
// {
//     system("color 0b");
//     FILE *fptr;
//     int i, n;
//     char str[100];
//     char str1;
//     printf("Enter your number : ");
//     scanf("%d", &n);
//     printf("Enter your lines : \n");
//     fptr = fopen("wwww.txt", "w");
//     for (i = 0; i < n + 1; i++)
//     {
//         fgets(str, sizeof str, stdin);
//         fputs(str, fptr);
//     }
//     fclose(fptr);
//     fptr = fopen("wwww.txt", "r");
//     printf("\n The content of the file %s is  :\n", "wwww.txt");
//     str1 = fgetc(fptr);
//     while (str1 != EOF)
//     {
//         printf("%c", str1);
//         str1 = fgetc(fptr);
//     }
//     printf("\n\n");
//     fclose(fptr);
//     return 0;
// }

// 5. Write a program in C to Find the Number of Lines in a Text File.
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//     FILE *prt = NULL;
//     char ch;
//     int i;
//     prt = fopen("wwww.txt", "r+");
//     if (prt == NULL)
//     {
//         exit(0);
//     }
//     while (ch != EOF)
//     {
//         ch = getc(prt);
//         for (i = '0'; i <= '9'; i++)
//         {
//             if (ch == i)
//             {
//                 printf("%c", ch);
//             }
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char ch;
//     int i = 0;
//     ptr = fopen("wwww.txt", "r+");
//     while (ch != EOF)
//     {
//         ch = getc(ptr);
//         if (ch == '\0')
//         {
//             i++;
//         }
//     }
//     printf("%d", i);
//     fclose(ptr);
//     return 0;
// }

// 15. Write a program in C to remove a file from the disk
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr = NULL;
//     int num;
//     char name[20];
//     gets(name);
//     num = remove(name);
//     if (num == 0)
//     {
//         printf("remove");
//     }
//     else
//     {
//         printf("No");
//     }
//     return 0;
// }

// file in using struct store the data
// #include <stdio.h>
// #include <string.h>
// #include <windows.h>
// #include <stdlib.h>
// struct student
// {
//     char name[20];
//     int Roll;
//     int Mark;
//     char Vill[20];
// } studen;
// int main()
// {
//     system("color 0b");
//     FILE *ptr = NULL;
//     ptr = fopen("D:\\Abhis.txt", "wb");
//     int num, i;
//     printf("Enter your student number : ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         fflush(stdin);
//         printf("for student %d\n", i);
//         printf("Enter Name : ");
//         gets(studen.name);
//         printf("Enter your Roll number : ");
//         scanf("%d", &studen.Roll);
//         printf("Enter your marks : ");
//         scanf("%d", &studen.Mark);
//         printf("Enetr your village : ");
//         scanf("%s", studen.Vill);
//         fwrite(&studen, sizeof(studen), 2, ptr);
//     }
//     fclose(ptr);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int a;
// int main()
// {
//     // FILE *ptr = NULL;
//     // char ch;
//     // ptr = fopen("Abhi.txt", "r");
//     // fscanf(ptr, "%c", &ch);
//     // printf("%c", ch);
//     // fclose(ptr);
//     printf("Enter your number : ");
//     scanf("%d", &a);
//     printf("%d", a);
//     return 0;
// }