#include<stdio.h>
void ini(int atm[][10],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&atm[i][j]);
		}
	}
}
int maxWith(int atm[][10],int m,int n)
{
	int l;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(atm[i][j]>l)
				l=atm[i][j];
		}
	}
	return l;
}

static int lpos;

int maxDep(int r[],int n,int *max)
{	
	static int rno=0;int armax[10];
	 int l;//,lpos;
	for(int i=0;i<n;i++)
	{
		if(r[i]>*max)
			*max=r[i];
	}
	//armax[rno]=*max;
	if(*max>l)
	{
		l=*max;
		lpos=rno;
	}
	//for(int i=0;i<)
	rno++;
	return lpos;
	

}
int main()
{
	int atm[10][10];
	int m,n,*max;
	printf("Enter number of branches and number of transactions:\n");
	scanf("%d %d",&m,&n);
	int arr[m];
	ini(atm,m,n);
	printf("check");
	printf("The max cash withdrawn is: %d",maxWith(atm,m,n));
	for(int i=0;i<m;i++)
	{
		arr[i]=maxDep(*(atm+i),n,max);
		//printf("%d\n",arr[i]);
	}
	printf("The max deposit is at: %d branch",lpos);//maxDep(atm,n,max));
	
	
}
