#include<stdio.h>
int main(void)
{
  int sum = 0;
  int n ;
  int i = 0;
  scanf("%d",&n);
  
  while(1)
  {
      i++;
      sum = sum +i;
      if(sum>=n)
        break;
  }
  printf("%d",i);
  return 0;
}
