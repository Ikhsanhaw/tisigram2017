#include <stdio.h>
int main ()
{
	int A,B;
	scanf("%d",&A);
	scanf("%d",&B);
	if ((A>=1 && A<=100) && (B>=0 && B<=10))
	{
	    printf("%d %d\n",A/B,A%B);
	}
	return 0;
}
