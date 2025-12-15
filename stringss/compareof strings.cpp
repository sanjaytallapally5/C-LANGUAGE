#include <stdio.h>
#include <string.h>
int main()
{
	char st1[100],st2[100];
	int i,flag=0;
	printf("enter the first strig");
	gets(st1);
	printf("enter the second string");
	gets(st2);
	while(st1[i]!='\0' || st2[i]!='\0')
	{
		if(st1[i]!=st2[i])
		{
		flag=1;
		break;
	}
		i++;
	}
	if(flag==0)
	printf("the string are equal");
	else
	printf("the stringd are not equal");
	return 0;
	
	
	
}
