#include<stdio.h>
#include<conio.h>
int main() 
{
	int a=15,b=50;
	printf("%d\n",(a>b)&&(a<b));//0
	printf("%d\n",(a>b)||(a<b));//1
	printf("%d\n",!(a>b));//0
	getch();
}
