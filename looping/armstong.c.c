#include <stdio.h>
int main()
{
  int original,rem,sum,i,n;
  printf("Enter number\n");
  scanf("%d",&n);
  original=n;
  while(n!=0)
  {
  	rem = n%10;
  	sum=sum+ (rem*rem*rem); 
  	n=n/10 ;
  }
  if ( sum == original){
	printf("armstrong\n");
  }
  else{
  	printf("not armstrong \n");
  }
  
  
}
