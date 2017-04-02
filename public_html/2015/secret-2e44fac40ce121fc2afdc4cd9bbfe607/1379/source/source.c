#include <stdio.h>

int main(){
	int permen, anak, bagi, sisa;
	
	scanf("%d", &permen);
	scanf("%d", &anak);
	bagi = permen/anak;
	sisa = permen%anak;
	printf("%d %d\n", bagi, sisa);
	
}
