#include <stdio.h>

int main(){
	int tgl, jml;
	scanf("%d", &jml);
	scanf("%d", &tgl);
	
	if(jml>=50000){
		jml=jml-(jml*1/100*tgl);
	}
	
	printf("%d\n", jml);
	return 0;
}
