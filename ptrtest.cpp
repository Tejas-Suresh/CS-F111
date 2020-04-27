#include<stdio.h>
int main(){    
	int line[]={10,20,30,40,50};        

	line[2]=*(line + 1);    
	*(line+1) = line[4];         

	int *ptr;     ptr = &line[5];  //printf("%d",*ptr);   
	ptr--;       
	*ptr = line[3];    
	*line=*ptr;        

	for(int i =0;i<5;i++) 
    printf("%d ", *(line+i));   
	     //int (*pgr)[5]=line;
	     printf("%d",*pgr);
return 0;
}

