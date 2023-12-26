#include<stdio.h>
#include<conio.h>
void main()
{int conversion;
float a,b,c,d,e;
clrscr();
printf("1.km to miles\n 2.imches to foot\n 3.cm to inch\n 4.pound to kg\n 5.inch to meter\nType of conversion:\n");
scanf("%d",&conversion);
switch(conversion)
{
case 1:
printf("enter kilometer to convert miles:\n");
scanf("%f",&a);
printf("your ans:%f",a*0.621);
break;
case 2:
printf("enter inch to convert foot:\n");
scanf("%f",&b);
printf("your ans:%f",b*0.083);
break;
case 3:
printf("enter kilometer to convert miles:");
scanf("%f",&c);
printf("your ans:%f",c*2.5);
break;
case 4:
printf("enter pound to convert kilogram:");
scanf("%f",&d);
printf("your ans:%f",d*0.454);
break;
case 5:
printf("enter inch to convert meter:");
scanf("%f",&e);
printf("your ans:%f",e*0.0254);
break;
}
getch();
}