#include <stdio.h>
#include <conio.h>
void  main()
{
int num1,num2;
clrscr();

printf("\ninput 1:" );
scanf("%d",&num1);
printf("input 2:");
scanf("%d",&num2);
printf("\nAdd:%d",num1+num2);
printf("\nSub:%d",num1-num2);
printf("\nProduct:%d",num1*num2);
printf("\nDiv:%.2f",(float)num1/(float)num2);
printf("\nmod:%d",num1%num2);
sleep(10);
}


