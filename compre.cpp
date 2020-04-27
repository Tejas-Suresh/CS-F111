#include<stdio.h>
struct s
{
	int a;
	struct s *b;
	
}*w;
void fun(int x) {
    if (x>1) {
        fun(--x);
        printf("%d",x);
        fun(--x);
		}   
}

int main()
{
/*	int i;
	char name[20];
	float test=100/3;
	float testt=100/3.0;
	printf("%f %f",test,testt);
	int a=-1&&8;//||(testt=1);
	printf(" %d %f %f",a,test,testt);
	while(name[i]!='\n')   
	{      
	  i++;     
	  name[i]=getchar();   
	}

for(int i=0;i<4;i++)
{
	static int a=i;
	a++;
	printf("%d:%d",a,i);
}*/

int x[] = {10,12,14}; 
    int *y, **z; 
    y = x;  
    z = &y; 
    printf("x = %d, y = %d, z = %d\n", x[0], *(y+1), *(*z+2));
    printf("x = %d, y = %d, z = %d\n", x[0], *y+1, **z+2);
    //all print the same thing: *w.a,w->a,->w.a
    fun(4);
    return 0; 


}
