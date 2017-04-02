#include <stdio.h>
 
int main(){
	int N;
	int i,j,temp=0, x,y,pembilang,penyebut;
	scanf("%d", &N);
	int harga[N][2];
	
	for(i = 0; i < N; i++){
		for (j = 0; j < 2; j++){
			scanf("%d", &harga[i][j]);
		}
	} 
	for (i = 0; i < N; i++){
 
			x = harga[i][0];
			y = harga[i][1];
			while (y != 0){
				temp = x % y;
				x = y;
				y = temp;
			}
			
			pembilang = harga[i][1]/x;
			penyebut = harga[i][0]/x;	
	
		printf("%d/%d\n", pembilang, penyebut);
	}
	
	return 0;
}
