#include <stdio.h>
#include <string.h>

int main(){
	char kalimat[100];
	gets(kalimat);
	int i;
	for(i=0;i<strlen(kalimat);i++){
		printf("%c",kalimat[i]);
		if(kalimat[i]=='a')
			printf("pa");
		else if(kalimat[i]=='i')
			printf("pi");
		else if(kalimat[i]=='u')
			printf("pu");
		else if(kalimat[i]=='e')
			printf("pe");
		else if(kalimat[i]=='o')
			printf("po");
	}
	printf("\n");
}
