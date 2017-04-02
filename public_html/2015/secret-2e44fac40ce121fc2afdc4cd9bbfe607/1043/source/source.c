#include <stdio.h>

int faktor(int a, int b){
	int min, angka[2], j;
	angka[0] = a;
	angka[1] = b;
	if(a < b){
		min = a;
		j = 0;
	}else{
		min = b;
		j = 1;
	}
	int FPB = 0;
	while(min >= 1 && FPB == 0){
		if(a%min == 0 && b%min == 0){
			FPB = min;
		}else{
			min --;
		}
	}
	return FPB;
}

int main(){
	int i, j, tc, FPB;
	scanf("%d", &tc);
	int A[tc][2];
	for (i = 0 ; i < tc ; i ++){
		for(j = 0 ; j <= 1 ; j ++){
			scanf("%d", &A[i][j]);
		}
		FPB = faktor(A[i][0], A[i][1]);
		A[i][0] = A[i][0]/FPB;
		A[i][1] = A[i][1]/FPB;
	}
	for(i = 0 ; i < tc ; i ++){
		printf("%d/%d\n", A[i][1], A[i][0]);
	}
	
	return 0;
}
