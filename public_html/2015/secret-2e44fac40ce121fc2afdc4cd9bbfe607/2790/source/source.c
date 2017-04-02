#include<stdio.h>

int main()
{
	int A, B, H, n;
		scanf("%d\t%d\t%d", &A,&B,&H);
	if(0 <= A, A<= 500, 0 <= B, B<= 500, H>=0, H<=10000){
	if(A < B)
	{
	printf("mustahil\n");
	}else{
	n=0;
	while(H>=A)
	{
		n++;
		H=H-A;
		H=H+B;	
		}
		printf("%d\n", n);
	}

		printf("\n");
		return 0;
	}
}
