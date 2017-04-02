#include <stdio.h>

int main(){
	int n, i, terbesar;
	
	scanf("%d",&n);
	if((n > 0) && (n <= 1000)){
		int angka[n];
		for(i = 0; i < n; i++){
			scanf("%d",&angka[i]);
		}
		terbesar = angka[0];
		for(i = 1; i < n; i++){
			if(angka[i] > terbesar){
				terbesar = angka[i];
			}
		}
		printf("%d\n",terbesar);
	}
	
	return 0;
}
