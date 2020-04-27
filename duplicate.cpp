#include<stdio.h>
int main()
{
	int a[5];
	for(int i=0;i<5;i++)
	{   //printf("Entering");
		scanf("%d",&a[i]);
		//printf("\n");
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;)
		{
			if(a[i]==a[j])
			{
				for(int g=j;g<5;g++)
				{
					a[g]=a[g+1];
				}
			}
			else
			{
				j++;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}
