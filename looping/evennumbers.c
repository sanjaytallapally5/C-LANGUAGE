#include <stdio.h>
int main()
{
  int i,n;
  i=1;
  printf("Enter number \n");
  scanf("%d",&n);
  while(i<=n)
  {
  	if(i%2==0)
  	printf("  %d  ",i);
  	i++;
  }
  return 0;
}
