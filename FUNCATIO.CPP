#include<stdio.h>
#include<conio.h>
int A[10]={2,4,6,8,10,12,14,16,18,20};
int B[10]={1,3,5,7,9,11,13,15,17,19};
int C[20],i=0,j=0,k;
void margetwoarray();
void main()
{
clrscr();
margetwoarray();
getch();
}

void margetwoarray()
{
for(k=0;k<=19;k++)
{
if(A[i]>B[j] && j<10)
{
C[k]=B[j];
j++;
}
else
{
C[k]=A[i];
i++;
}
}
for(k=0;k<=19;k++)
{
printf("\n%d",C[k]);
}
}