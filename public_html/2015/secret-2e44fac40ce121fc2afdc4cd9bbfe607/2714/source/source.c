#include <stdio.h>

int main()
{
	int A[2], i;
	
	for(i=0;i<3;i++)
		scanf("%d", &A[i]);
	
	A[1]=A[1]+A[0];
	if(A[0]-A[2]<0)
		printf("mustahil!\n");
	else
		A[2]=A[0]-A[2];
	
	for(i=0;i<3;i++)
		printf("%d\n", A[i]);
	
	return 0;
}
