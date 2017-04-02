#include <stdio.h>
#include <string.h>

typedef char string[1005];
int main(){
	string kalimat;
	gets(kalimat);
	for ( int i = 0 ; i < strlen(kalimat) ;i++){
		printf("%c",kalimat[i]);
		if (kalimat[i]=='a') printf("pa");
		else if (kalimat[i]=='a') printf("pa");
		else if (kalimat[i]=='i') printf("pi");
		else if (kalimat[i]=='u') printf("pu");
		else if (kalimat[i]=='e') printf("pe");
		else if (kalimat[i]=='o') printf("po");
	}
	printf("\n");
	return 0;
}