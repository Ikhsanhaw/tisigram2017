#include <stdio.h>
#include <stdlib.h>
int main ()
{
	 int X,H,B;
	 scanf ("%d %d",&X,&H);
	 if ((X<0) && (H<0))
	 {}
	 else if ((X!=0) && (H!=0))
	 {
	 B=H/X;
		  printf("%d\n",B);
		}
		else
		{
		printf("mustahil!\n");
		}

	 return 0;
}
