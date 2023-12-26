#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{char *str;
int n,i,g;
clrscr();
printf("no. of employee id=");
scanf("%d",&n);
for(i=0;i<n;i++){
str=(int *)malloc(g*sizeof(int));
printf("\n\nenter character length of id:");
scanf("%d",&g);
printf("\nenter id of employee %d:",i);
scanf("%s",str);
printf("\nid of employee %d:\n%s",i,str);
free(str);
}
getch();
}