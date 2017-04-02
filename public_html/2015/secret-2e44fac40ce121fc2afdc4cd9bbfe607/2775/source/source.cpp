#include<stdio.h>

int main()
{
	int A, B, H, n;
		scanf("%d\t%d\t%d", &A,&B,&H);
	if(A < B)
	{
	printf("mustahil\n");
	}else{
	n=0;
	while(H>=A)
	{
		H=H-A;
		H=H+B;	
		n++;
		}
		printf("%d", n);
	}

		printf("\n");
		return 0;
}
