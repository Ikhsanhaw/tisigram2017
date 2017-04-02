#include <stdio.h>

int main() {
	int pasukanS,pasukanM;
	
	scanf("%d %d",&pasukanS, &pasukanM);
	if(pasukanS>=pasukanM) {
		printf("PERANG");
	} else {
		printf("MUNDUR");
	}
	return 0;
}
