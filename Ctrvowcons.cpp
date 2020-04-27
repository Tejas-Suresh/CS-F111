#include<stdio.h>
int main()
{
	char s[15];
	int ctrv,ctrc,i=0,a;
	fgets(s,15,stdin);
	while(s[i]!='\n')
	{
		
		i++;
		if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
		{	
			ctrv++;
		}
		else
			ctrc++;
	}
	printf("No of vowels= %d",ctrv);
	printf("\nNo of consonants= %d",ctrc);
	return 0;
}
