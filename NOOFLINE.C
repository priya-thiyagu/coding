#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
FILE *fp;
char filename[]="input.txt";
char ch;
int linecount=0;
int temp=0;
fp=fopen(filename,"r");
while((ch=fgetc(fp)) != EOF)
{
temp=1;
if(ch =='\n')
{
linecount++;
}
}
if(temp==0)
{
printf("the file is empty");
}
 else
 {
 linecount=linecount+1;
 }
fclose(fp);
printf("no of lines:",linecount);
}
