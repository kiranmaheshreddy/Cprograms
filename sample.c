#include<stdio.h>
int main()
{
  int i,a,sum=0;
  int n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a);
     sum+=a;
  }
  printf("sum is %d\n",sum);
}
