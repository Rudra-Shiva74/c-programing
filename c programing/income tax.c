#include<stdio.h>
int main()
{
	int income,tax;
	float a=0.5,b=0.20,c=0.30;
	
	printf("The income is per year  = ",income);
	scanf("%d",&income);
	
	if(income<250000)
	{
		printf("No give the Tax");
	}
	else if(income>250000 && income<500000)
	{
		printf("give tax 5 %% \n");
		printf("%d * %f = %f",income,a,income*a);
	}
	else if(income>500000 && income<1000000)
	{
		printf("give tax 20 %% \n");
		printf("%d * %f = %f",income,b,income*b);
	}
	else if(income>1000000)
	{
		printf("give tax 30 %% \n");
		printf("%d * %f = %f",income,c,income*c);
	}
}


