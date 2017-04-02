#include <stdio.h>

int main()
{
	 int x,y,i,j,k;
	 scanf("%d", &x);
	 scanf("%d", &y);
	 j=0;
	 k=2;
	 if ((x>0) && (y<100))
	 {
		 if (y%2==1)
		 {
			 for(j=0; j*2<x; j++)
			{
				i=(y%2)+(j*2);
				printf ("%d\n", i);

			 }
		 }
		 else
		 {
			while (j<x/2)
			{
				i=(y%2)+(j+k);
				printf ("%d\n", i);
				j++;
				k++;
		 }
		 }
		 }
		 return 0;
		 }
