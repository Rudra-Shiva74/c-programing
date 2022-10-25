// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter how many you take number in array : ");
//     scanf("%d", &num);
//     int arr1[num], max;
//     for (int j = 0; j < num; j++)
//     {
//         printf("Element %d : - ", j);
//         scanf("%d", &arr1[j]);
//     }
//     for (int i = 0; i < num; i++)
//     {
//         for (int j = i + 1; j < num; j++)
//         {
//             if (arr1[i] < arr1[j])
//             {
//                 max = arr1[i];
//                 arr1[i] = arr1[j];
//                 arr1[j] = max;
//             }
//         }
//     }
//     for (int k = 0; k < num; k++)
//     {
//         printf("%d ", arr1[k]);
//     }
//     // printf("%d", max);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     for (int i = 5; i >= 1; i--)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k < i; k++)
//         {
//             printf("%d*", k);
//         }
//         printf("\n");
//     }
//     return 0;
// }