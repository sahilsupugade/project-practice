#include<stdio.h>
#include<conio.h>
void main()
{
//---Writing a file---
// char str[64]="i am learning file management";
FILE *ptr=NULL;
char string[64];
clrscr();
/*ptr=fopen("c.txt","w");
fprintf(ptr,"%s",str);
fclose(ptr);*/

//---Reading a file---
ptr=fopen("c.txt","r");
/* ----this will not print complete file because
when whitespace character occurs it stops---- */
//fscanf(ptr,"%s",string);
fgets(string,30,ptr);//this does not consider whitespace and stops
printf("%s",string);
fclose(ptr);
getch();
}