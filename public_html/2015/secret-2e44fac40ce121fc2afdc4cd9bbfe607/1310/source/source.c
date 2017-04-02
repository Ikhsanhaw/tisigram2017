#include <stdio.h>

int main(){
	int jml_permen, jml_murid;
	scanf("%d", &jml_permen);
	scanf("%d", &jml_murid);
	printf("%d %d\n", jml_permen/jml_murid, jml_permen%jml_murid);
	return 0;
}
