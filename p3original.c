#include <stdio.h>
int input_n()
{
  int n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
    for(i=1;i<=n;i++)
    {
    sum=sum+i;
  }
  return sum;
}
  void output(int n, int sum)
{
  int i;
  for(i=0;i<n;i++);
  {
    printf("%d+",i);
  }
  printf("%d is %d\n",i,sum);
}
int main()
{
  int a,b;
  a=input_n();
  b=sum_n(a);
  output(a,b);
  return 0;
}