// use of fprintf and fscanf
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char string[100] = "Abhishek is the good boy";
//     ptr = fopen("abhi.txt", "w");
//     fprintf(ptr, "%s", string);
//     // fclose(ptr);
//     return 0;
// }

// use of fgetc
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char string;
//     ptr = fopen("abhi.txt", "r");
//     while (string != EOF)
//     {
//         string = fgetc(ptr);
//         printf("%c", string);
//     }
//     fclose(ptr);
//     return 0;
// }

// gets in c
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr = NULL;
//     ptr = fopen("abhi.txt", "r+");
//     char string[78];
//     fgets(string, 5, ptr);
//     puts(string);
//     return 0;
// }
