#include <stdio.h>
int suara(int can, int reg){
	int A[can], i, j, suara, max, winner;
	for(i = 0 ; i < can ; i ++){
		A[i] = 0;
	}
	max = A[0];
	for( i = 0 ; i < reg ; i ++){
		for( j = 0 ; j < can ; j ++){
			scanf("%d", &suara);
			A[j] = A[j] + suara;
			if(max < A[j]){
				max = A[j];
				winner = j;
			}
		}
	}
	return winner + 1;
}

int main(){
	int i, tc, can, reg;
	scanf("%d", &tc);
	int pemenang[tc];
	for(i = 0 ; i < tc ; i ++){
		scanf("%d %d", &can, &reg);
		pemenang[i] = suara(can, reg);
	}
	for(i = 0 ; i < tc ; i ++){
		printf("%d\n", pemenang[i]);
	}
	
	return 0;
}
