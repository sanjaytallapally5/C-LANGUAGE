#include <stdio.h>
#include <string.h>
int main()
{
	char st[100];
	int length=0;
	printf("enter the string");
	gets(st);
	length=strlen(st);
	printf("%d",length);
	return 0;
	
}

