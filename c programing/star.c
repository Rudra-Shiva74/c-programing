#include <stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	// printf("\n");
	return 0;
}
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
// * * * * * * *
// * * * * * * * *
// * * * * * * * * *
// * * * * * * * * * *

// #include <stdio.h>
// int main()
// {
// 	for (int i = 1; i <= 10; i++)
// 	{
// 		for (int j = 10; j >= i; j--)
// 		{
// 			printf("* ");
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }
// * * * * * * *
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
// #include <stdio.h>
// int main()
// {
// 	int n;
// 	printf("Enter the number of rows");
// 	scanf("%d", &n);
// 	for (int i = 1; i <= n; i++)
// 	{
// 		for (int j = 1; j <= n; j++)
// 		{
// 			if (i == 1 || i == n || j == 1 || j == n)
// 			{
// 				printf("*");
// 			}
// 			else
// 				printf(" ");
// 		}
// 		printf("\n");
// 	}

// 	return 0;
// }