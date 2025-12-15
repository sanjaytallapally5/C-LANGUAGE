#include <stdio.h>
#include <string.h>
int main()
{
	char st[100];
	int i,rev=0;
	printf("enter the characters to reverse");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	rev++;
	for(i=rev-1;i>=0;i--)
    printf("%c",st[i]);
	return 0;
	
	
}
