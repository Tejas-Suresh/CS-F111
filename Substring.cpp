#include<iostream>
#include<string.h>
#include<ctype.h>
#include<conio.h>
using namespace std;
int main()
{
	int ctr=0,i=0,n=0,c;
	char a[50],b[20];
	gets(a);
	gets(b);
	while(b[n]!='\0')
	{
		n++;
		
	}
	cout<<n;
	while(strlen(a)-n+i<=strlen(a))
	{
		
		if(b[i]==a[strlen(a)-n+i])
			ctr++;
		i++;
	}
	if(ctr==n)
		cout<<"It is a substring";
	else
		cout<<"It isn't";
}
