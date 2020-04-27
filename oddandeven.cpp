#include<stdio.h>
int main()
{
	int a[6],j=5,k=0;
	int b[6];
	for(int i=0;i<6;i++)
	{
		
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			{
				b[k]=a[i];
				k++;
			}
		else
			{
				b[j]=a[i];
				j--;
				//printf("i= %d/n",i);
			}
	
	}
	for(int i=0;i<6;i++)
		printf("%d\n",b[i]);
	return 0;
}
