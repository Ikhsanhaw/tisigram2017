#include <stdio.h>

int main(){
	char awal, akhir;
	int jml_huruf, i;
	scanf("%c %c", &akhir, &awal);
	jml_huruf = akhir - awal - 1;
	for(i = 1; i <= jml_huruf; i++){
		printf("%c\n", akhir-i);
	}
	return 0;
}
