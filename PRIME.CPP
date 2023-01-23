#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
printf("Enter the frist 10 prime ");
int i,x[10];
	for(i=0;i<=10;i++)
	{
	scanf("%d",&x[i]);
	}
	for(i=0;i<=10;i++)
	{
	printf("%d",x[i]);
	}
getch();
}