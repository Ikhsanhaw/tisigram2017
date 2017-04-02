 #include <stdio.h>
int main ()
{
	 int X,H,B;
	 scanf ("%d %d",&X,&H);
	 if ((X!=0) && (H!=0))
	 {
		  B=H/X;
		  printf("%d\n",B);
		  if (B==0)
		  {
				printf("mustahil\n");
		  }
	 }
	 else
	 {
		printf("mustahil\n");

	  }
	 return 0;
	 }

