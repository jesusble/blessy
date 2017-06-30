#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter the numbers");
scanf("\n %d %d %d",a,b,c);
if(a>b)
{
if(b>c)
{
printf("\n a is greater");
}
printf("\n b is greater");
}
else
printf("\n c is greater");
getch();
}
