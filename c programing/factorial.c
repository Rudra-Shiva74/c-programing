#include<stdio.h>
int main()
{
	int num,n,factorial=1;
	printf("Enter The Number ");
	scanf("%d",&num);
	if (num<0)
	{
		printf("no factorial");
	}
	else if (num==1)
	{
		printf("1");
	}
	else
	{
		for(n=1;n<=num;n++)
		{
			//printf("%d\n",n);
			factorial=factorial*n;
		}
		printf("%d",factorial);
	}
}
