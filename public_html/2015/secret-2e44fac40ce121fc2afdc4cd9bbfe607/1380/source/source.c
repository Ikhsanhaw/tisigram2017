#include <stdio.h>

int main(){
	int permen, anak, bagi, sisa;
	
	scanf("%d", &permen);
	scanf("%d", &anak);
	if(anak != 0){
		bagi = permen/anak;
		sisa = permen%anak;
		printf("%d %d\n", bagi, sisa);	
	}else{
		printf("%d %d\n", 0, permen);
	}
	
}
