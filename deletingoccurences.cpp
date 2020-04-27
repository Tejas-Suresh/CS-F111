#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	char w[10];
	fgets(str,30,stdin);
	fgets(w,10,stdin);
	char two[10][30];
	int k,p;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			two[k][p]='\0';
			k++;
			p=0;
		}
		else
		{
			two[k][p]=str[i];
			p++;
		}
	}
	two[k][p]='\0';
	p=0;
	for(int i=0;i<k+1;i++)
	{
		if(strcmp(two[i],w)==0)
		{
			two[i][p]='\0';
		}
	}
	p=0;
	for(int i=0;i<k+1;i++)
	{
		if(two[i][p]=='\0')
			continue;
		else
			printf("%s  ",two[i]);
	}
}

