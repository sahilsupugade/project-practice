#include<stdio.h>
#include<conio.h>
void assign(int *chg,int *chan)
{*chg=*chg+*chan;

}
void al(int *chg,int *chan)
{
if(*chg<*chan){
int t;
t=*chg;
*chg=*chan;
*chan=t;}
*chan=*chg-*chan-*chan;
}
int main()
{int a,b;
clrscr();
printf("enter two number for a & b\n");
scanf("%d %d",&a,&b);
assign(&a,&b);
al(&a,&b);
printf("ans%d %d",a,b);
getch();
return 0;
}