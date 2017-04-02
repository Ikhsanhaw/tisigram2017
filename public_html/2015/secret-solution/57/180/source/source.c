#include<stdio.h>

int main(){
	int X,A,B,C;
	scanf("%d",&X);
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	int hasil1,hasil2,status1=0,status2=0,X1=X,X2=X;
	while(status1==0){
		if((X1%A==0)&&(X1%B==0)&&(X1%C==0)){
			status1=1;
			hasil1=X1;
		}
		X1=X1-1;
	}
	while(status2==0){
		if((X2%A==0)&&(X2%B==0)&&(X2%C==0)){
			status2=1;
			hasil2=X2;
		}
		X2++;
	}
	
	printf("%d %d\n",hasil1,hasil2);
	return 0;
}
