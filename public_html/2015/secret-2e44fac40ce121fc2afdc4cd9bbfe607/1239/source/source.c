#include <stdio.h>

int main() {
	int pasukanS,pasukanM;
	
	scanf("%d %d",&pasukanS, &pasukanM);
	if(pasukanS>pasukanM) {
		printf("PERANG\n");
	} else {
		printf("MUNDUR\n");
	}
	return 0;
}
