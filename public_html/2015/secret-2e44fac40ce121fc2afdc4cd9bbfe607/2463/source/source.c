#include <stdio.h>
int main ()
{
	 int x,y,z;
	 scanf("%d %d",&x,&y);
	 if (x>=0 && y>=0)
	 {
		if ((x>0 || x<0)&&(y>0 || y<0))
		{
		 z=y/x;
		 printf("%d\n",z);
		}
		else
		{
		printf("mustahil!\n");
		}
	 }
return 0;
}
