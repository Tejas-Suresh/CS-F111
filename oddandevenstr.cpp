#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	char o[10];char e[10];
	fgets(a,10,stdin);
	
	for(int i=0;i<strlen(a);i++)
	{
		if((i%2)==0)
			e[i]=a[i];
		else
			o[i]=a[i];
	}
	printf("%s\n%s",e,o);
}
