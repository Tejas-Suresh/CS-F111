#include<stdio.h>
#include<stdlib.h>
int main()
{
/*	FILE *fp;
	char s[20],d[20];
	fp=fopen("Text.txt","w");
	scanf("%s",s);
	fprintf(fp,"%s",s);
	fclose(fp);
	FILE *fp2=fopen("Text.txt","r+");
	while(fgets(d,20,fp2));
	{
		printf("%s",d);
	}
	
	fclose(fp2);*/
/*	FILE *fpb;
	int i[2]={1,2};int dest[2];
	fpb=fopen("file.bin","wb");
	fwrite(i,sizeof(i),1,fpb);
	fclose(fpb);
	fpb=fopen("file.bin","rb");
	fread(dest,sizeof(dest),1,fpb);
	for(int i=0;i<2;i++)
	{
		printf("%d ",dest[i]);
	}
	fclose(fpb);*/
	int *p,*q,i;
	p=(int*)malloc(5*sizeof(int));
	if(p==NULL)
	{
		printf("Memory not allocated");
		
	}
	q=p;
	for(int i=0;i<5;i++)
	{
	
		*p++=i;
	}
	p=q;
	for(int i=0;i<5;i++)
	{
		printf("The elements are:%d\n",p[i]);
	}
	printf("%p\n",p);
	int *r=(int*)realloc(p,1000);
	printf("%p\n",r);
	for(int i=0;i<5;i++)
	{
		printf("%d",r[i]);
	}
}
