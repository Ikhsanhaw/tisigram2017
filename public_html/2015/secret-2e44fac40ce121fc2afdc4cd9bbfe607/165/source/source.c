#include <stdio.h>

int main(){
	int awal, akhir, i;
	scanf("%d %d", &awal, &akhir);
	char huruf[akhir-awal+1];
	for(i = 0 ; i < akhir-awal; i++){
		huruf[i] = 'A'+ akhir - i - 1;
		if(i!=0){
			printf(" ");
		}
		printf("%c", huruf[i]);
	}
	printf("\n");
	return 0;
}
