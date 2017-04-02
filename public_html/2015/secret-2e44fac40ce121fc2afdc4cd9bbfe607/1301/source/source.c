#include <stdio.h>
int main ()
{
	int A,B,C,D;
	scanf("%d",&A);
	scanf("%d",&B);
	if ((A>=1 && A<=100) && (B>=0 && B<=10))
	{
		C=A/B;
	    D=A%B;
	    printf("%d %d\n",C,D);
	}
	return 0;
}
