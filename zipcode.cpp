 #include<stdio.h>
int main()
{
	int zp[2][2],i;
	zp[0][0]=1;zp[1][0]=2;
	zp[0][1]=3;zp[1][1]=4;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{	
			printf("%p,%d\n",(*(zp+i)+j),(*(*(zp+i)+js)));
		}
	}
	return 0;
}
