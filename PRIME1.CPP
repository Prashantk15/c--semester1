\
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,c=0,a;
printf("Enter prime number limit");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
c=0;
	for(j=1;j<=i;j++)
	{

	if(i%j==0)
	{
	c++;
	}
	}
	if(c==2)
	{
	printf("%d\t",i);
	}
}
getch();
}