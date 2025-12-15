#include <stdio.h>
int main()
{
  int i,sum=0,rem=0,n;
  printf("Enter number\n");
  scanf("%d",&n);
  while(n!=0)
  {
  	rem = n%10;
  	sum=sum + rem ; 
  	n=n/10 ;
  }
  printf("%d",sum);
  return 0;
}
