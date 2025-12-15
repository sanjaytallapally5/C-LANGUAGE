#include <stdio.h>
#include <string.h>
int main()
{
	char st1[100],st2[100];
	printf("enter the string 1");
	gets(st1);
	printf("enter the string 2");
	gets(st2);
	strcpy(st2,st1);
	printf("%s%s",st1,st2);
	
}
