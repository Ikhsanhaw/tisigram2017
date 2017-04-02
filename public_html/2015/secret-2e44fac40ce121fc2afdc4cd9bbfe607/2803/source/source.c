#include<stdio.h>

int main()
{
	int A, B, H;
	int n=0;
	scanf("%d\t%d\t%d", &A,&B,&H);
	if(A < B)
	{
	printf("mustahil\n");
	}
	else{
	while(H >= A)
	{
		H=H-A+B;	
		n++;
		}
		printf("%d\n", n);
	}
		printf("\n");
		return 0;
}
