#include <stdio.h>

int main()
{
	 int n,i;
	 scanf("%d", &n);

	 if ((n>=0) && (n<=1000))
	 {
		  i=n*(n*2);
		  printf("%d\n", i);
	 }

	 return 0;
}
