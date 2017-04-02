#include <stdio.h>
int main ()
{
	 int X,H,B;
	 scanf ("%d %d\n",&X,&H);
	 if ((X!=0 && X>0) && (H!=0 && H>0))
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
