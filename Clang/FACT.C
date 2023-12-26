#include<stdio.h>
#include<conio.h>
void main()
{
char a[30],b[30];
int n=0,i;
clrscr();
printf("enter 1 string:");
scanf("%s",a);
printf("enter 2 string:");
scanf("%s",b);
for(i=0;a[i]!='\0';i++)
n++;
for(i=0;b[i]!='\0';i++)
{
a[i+n]=b[i];
}
printf("%s",a);
getch();
}
