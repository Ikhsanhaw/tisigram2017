#include<stdio.h>

int main()
{
	int x,h,temp1,temp2,temp3;
	
	scanf("%d%d",&x,&h);
	
	if(x==0)
	{
		printf("mustahil\n");
	}
	else if(h==0)
	{
		printf("1\n");
	}
	else
	{
		temp1=h/x;
		temp2=temp1*2;
		temp1=h-temp2;
		temp3=h/x;
	
		printf("%d\n",temp3+temp1);
	}
	
	return 0;
}
