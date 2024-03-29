  #include <stdio.h>
  void main()
  {
  int value,temp=0;
  int i;
  clrscr();
  printf("enter the number:");
  scanf("%d",&value);
  if (value<2)
  {
  printf("it is not a prime number");
  }
  else
  {
  for(i=2;i<=value;i++)
  {
  if(value%i==0)
  {
     temp++;
     break;

  }
  }

  if(temp==1)
  {
  printf("its a prime number");
  }
  else
  {
  printf("its not a prime number");
  }
  }
  sleep(10);
  }








