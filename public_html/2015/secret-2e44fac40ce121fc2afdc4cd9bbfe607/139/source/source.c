#include <stdio.h>
#include <string.h>

int main(){
	char kalimat[11], huruf;
	short int i;
	
	gets(kalimat);
	for(i = 0; i < strlen(kalimat)/2; i++){
		huruf = kalimat[i];
		kalimat[i] = kalimat[strlen(kalimat)-1-i];
		kalimat[strlen(kalimat)-1-i] = huruf;
	}
	printf("%s\n",kalimat);
	
	return 0;
}
