#include <stdio.h>

int main()
{
	 int n,y,z,k,l,m;
	 scanf ("%d", &n);
	 scanf ("%d", &y);
	 scanf ("%d", &z);

	 if ((n,y>=0) && (z,y<=1000))
	 {
		  k=n+y;
		  l=n-z;
        printf("%d\n", n);
			printf("%d\n", k);
		  if(l<=0)
			{
				printf("mustahil\n");
			}
			else {
			printf("%d\n", l);
			}
		}
	 else
	 {
	  printf ("mustahil\n");
	 }


	 return 0;
}

