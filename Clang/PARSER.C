#include<stdio.h>
#include<conio.h>
#include<string.h>
int parser(char * str)
{int in=0,i;
int index=0;
for(i=0;i<strlen(str);i++){
if(str[i]=='<'){
in=1;
continue;
}
else if(str[i]=='>'){
in=0;
continue;
}
if(in==0)
{str[index]=str[i];
index++;
}
}
str[index]='\0';
while(str[0]==' ')
{
for(i=0;i<strlen(str);i++)
{ str[i]=str[i+1];
}
}
while(str[strlen(str)-1]==' ')
{ str[strlen(str)-1]='\0';

}
return 0;
}
void main()
{char str[]="<p>    this is html parser       </p>";
clrscr();
parser(str);
printf("the parsed html is _%s_",str);
getch();
}