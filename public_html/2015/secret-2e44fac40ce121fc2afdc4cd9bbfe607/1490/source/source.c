#include <stdio.h>
int main ()
{
	int A,B;
	scanf("%d",&A);
	scanf("%d",&B);
	if ((A>=1 && A<=100) && (B>=0 && B<=10))
	{
		if(B == 0){
			printf("%d %d\n",0,A);
		}
		else{
			printf("%d %d\n",A/B,A%B);
		}
	    
	}
	return 0;
}
