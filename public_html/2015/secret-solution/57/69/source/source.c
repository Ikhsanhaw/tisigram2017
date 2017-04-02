#include <stdio.h>
#include <math.h>

int kpk(int A,int B,int C){
	int res = C;
	while(res%A != 0 || res %B!= 0){
		res += C;
	}
	return res;
}

int main(){
	int X,A,B,C,r;
	scanf("%d %d %d %d",&X,&A,&B,&C);
	int resKpk = kpk(A,B,C);
	printf("[%d, %d]\n", resKpk, (X / resKpk + 1)*resKpk );
	return 0;
}

