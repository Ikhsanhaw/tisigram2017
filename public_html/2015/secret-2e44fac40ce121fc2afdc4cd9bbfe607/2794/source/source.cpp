#include <stdio.h>

int main()
{
	int A,B,C,D,E,F,N;
	scanf("%d", &N);
	A=(N*6);
	if(A>=20)
	{
		B=A%20;
		C=A-B;
		D=C/20;
	E=D*6;
	F=E+A+N+D;
	} else 
	{
		F=N+A;
	}
	printf("%d\n",F);
	return 0;
}