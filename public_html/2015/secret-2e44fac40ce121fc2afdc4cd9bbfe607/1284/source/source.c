#include <stdio.h>
int main ()
{
	int x,A,B;
	scanf ("%d",&x);
	A=(x/2)+(x/3)+(x/4);
	if ( A%2==0 )
	{
		B=A+1;
		printf ("%d\n",B);
	}
	else
	{
		
		printf ("%d\n",A);
	}
	return 0;
}
