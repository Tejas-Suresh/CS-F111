#include<stdio.h>
#include<string.h>
int main()
{
	char *p[4]={"this","is","a test","of pointers"},*temp;
	char ch[10];
	
	for(int i=0;i<3;i++)
	{
		if(strcmp(p[i],p[i+1])>0)
		{
			temp=p[i];
			p[i]=p[i+1];
			p[i+1]=temp;
		}
	}
	for(int i=0;i<4;i++)
	{	//printf("Entering\n");
		while(*p[i]!='\0')
	{
		printf("%c",*(p[i]++));
		
	}
		printf("\n");
	}
	
}
