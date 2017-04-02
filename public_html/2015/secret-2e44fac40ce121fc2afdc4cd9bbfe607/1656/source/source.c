 #include <stdio.h>
int main ()
{
	 int X,H,B;
	 scanf ("%d %d",&X,&H);
	 if (((X>0) && (X<=500)) && ((H>0) && (H<=10000)))
	 {
		  B=H/X;
		  printf("%d\n",B);
	 }
	 else
	 {
		printf("mustahil\n");

	  }
	 return 0;
	 }
