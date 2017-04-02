#include <stdio.h>
#include <string.h>

int main(){
	char kalimat[10];
	int n;
	gets(kalimat);
	for(n=strlen(kalimat);n>=0;n--){
		printf("%c",kalimat[n-1]);
	}
	printf("\n");
}
