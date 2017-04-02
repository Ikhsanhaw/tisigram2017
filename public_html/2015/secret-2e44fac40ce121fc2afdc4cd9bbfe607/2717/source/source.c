#include <stdio.h>

int main()
{
	int A[2], i;
	
	i=0;
	while(i<3)
	{
		scanf("%d", &A[i]);
		i++;
	}
	
	A[1]=A[1]+A[0];
	if(A[0]-A[2]<0)
		printf("mustahil!\n");
	else
		A[2]=A[0]-A[2];
	
	i=0;
	while(i<3)
	{
		printf("%d\n", A[i]);
		i++;
	}
	
	return 0;
}
