#include<stdio.h>

int main()
{
	int A, B, H, X;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &H);
	
	if (A>B)
	{
	 	X =H - (A-B)-1;
	 	printf("%d", X);
	}
	else
	{
		printf("mustahil");
	}
	printf("\n");
	return 0;
}
