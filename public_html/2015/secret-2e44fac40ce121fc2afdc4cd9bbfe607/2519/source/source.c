#include<stdio.h>

int main()
{
	int x,h,temp1,temp2;
	
	scanf("%d%d",&x,&h);
	
	temp1=h/x;
	temp2=temp1*2;
	temp1=h-temp2;
	
	printf("%d\n",(h/x)+temp1);
	
}
