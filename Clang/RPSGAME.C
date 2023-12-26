/*
0 means rock
1 means paper
2 means scissor*/
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
char rps(char name[10])
{int i,a,n,userp=0,compp=0,flag=0;
char str[10],strr[10]="rock",strp[10]="paper";
char strs[10]="scissor";
//below part to convert string into number
 for(i=1;i<4;i++)
 {
 label:
 srand(time(NULL));
 n=rand()%3;
printf("\n\nRound %d:-",i);
printf("\n%s's turn:",name);
scanf("%s",str);
if(strcmp(str,strr)==0)
{a=0;
}
else if(strcmp(str,strp)==0)
{a=1;
}
else
{a=2;
}
    if(n==0){
 //char(n)
  printf("computers turn:%s",strr);
 }
 else if(n==1){
 //char(n);
  printf("computers turn:%s",strp);
 }
 else{
 //char(n);
  printf("computers turn:%s",strs);
 }
  //if tie it will run again
 if(a==n){
 printf("\nIt's a tie - lets do it again\n");
 goto label;
 }
 if(a==0 && n==1){
 compp++;
 }
 else if(n==0 && a==1){
 userp++;
 }
 else if(a==1 && n==2){
 compp++;
 }
 else if(n==1 && a==2){
 userp++;
 }
 else if(a==0 && n==2){
 userp++;
 }
 else{compp++;
 }
 printf("\n\nPoints:\n%s:%d\ncomputer:%d",name,userp,compp);
 }
 if(userp>compp){
 flag=1;
 }
 return flag;
 }
void main()
{//int n;
int p;
char name[10];
clrscr();
/*srand(time(NULL));
n=rand()%3;*/
printf("Your name:");
scanf("%s",name);
p=rps(name);
if(p==1){
printf("\n%s wins",name);}
else{
printf("\ncomputer wins");
}
getch();
//return 0;
}
