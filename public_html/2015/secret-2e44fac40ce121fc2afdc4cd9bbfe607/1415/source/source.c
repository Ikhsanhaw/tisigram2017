#include <stdio.h>

int main(){
	int permen, siswa;
	
	scanf("%d", &permen);
	scanf("%d", &siswa);
	
	if(siswa==0){
		printf("%d %d\n", 0, permen);
	}else{
		printf("%d %d\n", permen/siswa, permen%siswa);
	}
	
	return 0;
}
