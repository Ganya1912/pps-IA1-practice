#include <stdio.h>
int input()
{
  int a;
  printf("enter 3 numbers to be compared\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if((a>b)&&(a>c))
  return a;
  else if(b>c)
  return b;
  else
  return c;
}
void output(int a,int b,int c,int large)
{
printf("the largest value is %d\n");
}
int main
{
  int a,b,c;
  a=input;
  b=input;
  c=input;
  return 0;
}