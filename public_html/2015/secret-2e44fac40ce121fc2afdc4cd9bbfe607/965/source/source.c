
#include<stdio.h>

int main(){
	int A,B;
	
	scanf("%d",&A);
	scanf("%d",&B);
	if(A>=0 && B>=0){
	A=A+B;
	printf("%d\n",A);
	A=A-2*B;
	printf("%d\n",A);
	A=(A+B)*2;
	printf("%d\n",A);
	}
	
	return 0;
	
}
