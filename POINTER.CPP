#include<stdio.h>
#include<conio.h>
void main()
{
int x=22;
int *p;
clrscr();
p=&x;
printf("\n Address of x is=%u",&x);
printf("\n Value of x is=%d",*p);
getch();
}
