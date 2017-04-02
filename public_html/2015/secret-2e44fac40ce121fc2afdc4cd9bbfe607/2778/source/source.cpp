#include <stdio.h>

int main(){
 	int A,B,H,z,n;
 	
 	scanf("%d",&A);
 	scanf("%d",&B);
 	scanf("%d",&H);
	if(B<A){
		z=0;
		n=A;
		while(n<=H){
			n=n+(A-B);
			z++;
		}
		printf("%d \n",z);
	}
	else {
		printf("mustahil \n");
	}
	
return 0;
}
