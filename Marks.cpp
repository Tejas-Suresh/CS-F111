#include<stdio.h>
struct student
{
	char name[20];
	char resp[5];
	int marks;	
}list[2];
void ini(student list[2],char key[5])
{
	for(int i=0;i<2;i++)
	{
		scanf("%s",list[i].name);
		printf("Recorded\n");
		//fgets(list[i].resp,5,stdin);
		scanf("%s",list[i].resp);
			for(int j=0;j<5;j++)
			{
				if(list[i].resp[j]==key[j])
					list[i].marks++;
			}
	}
	for(int i=0;i<2;i++)
	{
		printf("%s:  Marks:%d\n",list[i].name,list[i].marks);
	}
	

}
int main()
{
	char key[5]={'a','b','c','b','a'};
	ini(list,key);
	
}
