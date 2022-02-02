#include<stdio.h>
int input_n()
{
  int n;
  printf("enter the values of n\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
  {
  for(int i=1;i<=n;i++)
  sum=sum+i;
}
return sum;
}
void output(int n,int sum)
{
    printf("the sum of all %d =%d",n,sum);
  }
int main()
{
  int a,b,c;
  a=input_n();
  b=sum_n(a);
  output(a,b);
  return 0;
}