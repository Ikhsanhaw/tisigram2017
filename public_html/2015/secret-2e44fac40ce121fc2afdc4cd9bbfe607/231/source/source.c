#include <stdio.h>

int main(){
	int jml_huruf, akhir, i;
	scanf("%d %d", &jml_huruf, &akhir);
	for(i = 1 ; i <= jml_huruf ; i++){
		if(i!=1){
			printf(" ");
		}
		printf("%c", 'A'+ akhir - i);
	}
	printf("\n");
	return 0;
}
