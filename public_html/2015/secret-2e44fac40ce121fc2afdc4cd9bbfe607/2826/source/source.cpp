#include <stdio.h>

int main()
{
	int A,B,C,Y=0,X;
	scanf("%d %d %d",&A,&B,&C);
	X=A;
	if((A-B)<=0)
	{
		printf("mustahil\n");
	} else {
	do {
		X=(X-B)+A;
		Y=Y+1;
	} while (X<=C);
	printf("%d\n", Y);
	}
	return 0;
}
