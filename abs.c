#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\n enter the number:");
scanf("\n%d",&a);
if(a>0)
{
printf("\n the given no. is positive");
}  
else if(a==0)
{
printf("\n the given no. is zero");
}
else
{
printf("\n the given no. is negative");
}
getch();
}
