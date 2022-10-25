// #include <stdio.h>
// #include <time.h>
// #include <unistd.h>
// int main()
// {
//     int h, min, sec;
//     h = min = sec = 0;
//     while (1)
//     {
//         system("cls");
//         printf("%02d : %02d : %02d ", h, min, sec);
//         sec++;
//         if (sec == 60)
//         {
//             min += 1;
//             sec = 0;
//         }
//         if (min == 60)
//         {
//             h += 1;
//             min = 0;
//         }
//         if (h == 24)
//         {
//             h = 0;
//             min = 0;
//             sec = 0;
//         }
//         sleep(1);
//     }

//     return 0;
// }
