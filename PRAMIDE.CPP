#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int i,j,k;
	for(i=0;i<=10;i++)
	{
	printf("\n");

	for(k=i;k<=10;k++)
	{
	printf(" ");
	}
	for(j=0;j<=((2*i)-1);j++)
	{
	printf("*");
	}
	}



for(i=10;i>=0;i--)
	{
	printf("\n");

	for(k=10;k>=i;k--)
	{
	printf(" ");
	}
	for(j=0;j<=((2*i)-1);j++)
	{
	printf("*");
	}
	}
getch();
}
