#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int a[10],i,co=0,ce=0;
for(i=0;i<=9;i++)
{
printf("Enter any number");
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
{
if(a[i]%2==0)
{

printf("\nThis is even number");
}
else
{
printf("\nThis is odd number");
}
}
getch();
}