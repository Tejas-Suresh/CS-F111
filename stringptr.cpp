#include<stdio.h>
int main()
{
	char *p;
	char st[10];
	fgets(st,10,stdin);
	p=st;
	printf("Accepted");
	while(*p!='\n')
	{
		printf("%c",*p);
		p++;
	}
	return 0;
}
