#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
printf("print prime number 1-100");
for(i=1;i<=100;i++)
{
if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)

printf("%d\n",i);
}
getch();
}
