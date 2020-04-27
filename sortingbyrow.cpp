#include<stdio.h>
int main()
{
	int a[3][3],*temp;
	for(int i=0;i<3;i++)
	{
		printf("Row: %d\n",i+1);
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++)
	{
		
		 printf("check\n");
			temp=*(a+3*i);
			for(int j=0;j<2;j++)
		{
				
			if(*(temp+j)>*(temp+j+1))
			{  printf("check\n");
				int x=*(temp+j);
				*(temp+j)=*(temp+j+1);
				*(temp+j+1)=x;
			}
     	}
	}
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
