#include<stdio.h>
char *left(char src[],int num)
{
	int i;
	while((src[i]!='\n'))
	{
		i++;
		
	}
	char *p;
	p=src+(i-num);
	return p;
	
}
struct node
{
	int data;
	struct node* next;
}head;
void some(int l)
{int i=0;
	if(l<0)
	{
		printf("%d\n",l);
	}
	else
	{
		some(--l);
		//i++;
		printf("Iteration: %d\n",l);
	}
}
int main()
{
	/*char str[10];
	int i=0;
	fgets(str,10,stdin);
	char *l=left(str,4);
	while(l[i]!='\n')
	{
		printf("%c",l[i]);
		i++;
	}*///q1
	//q2
/*	char idno[13],char emailid[25];
	emailid[0]='f';
	scanf("%s",idno);
	for(int i=0;i++;i<4)
	{
		enailid[i+1]=idno[i];
	}
	//keep going...*/
	//q3
/*	int i;
	int *ptr=&i;
	scanf("%d",ptr);
	printf("\n%d",i+5);*/
/*	char name[]="BITSPILANIRAJASTHAN";
	char *p=name;
	printf("%s",p-p[1]);
*/
//some(6);
int var=5;
if(var>=4)
	++var;
if(var>=5)
	var+=2;
printf("%d\n",var);
	
}
