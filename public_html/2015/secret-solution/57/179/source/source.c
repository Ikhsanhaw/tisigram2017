#include<stdio.h>

int main(){
	int X,A,B,C;
	scanf("%d",&X);
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	int hasil1,hasil2,hasil3;
	if((A*B)%C==0){
		hasil1=A*B;
	}else if ((B*C)%A==0){
		hasil1=B*C;
	}else if((A*C)%B==0){
		hasil1=A*C;
	}else{
		hasil1=A*B*C;
	}
	
	while(hasil1<X){
		hasil2=hasil1;
		hasil1=hasil1*2;
		if(hasil1>X){
			hasil3=hasil1;
		}
	}
	printf("%d %d\n",hasil2,hasil3);
	return 0;
}
