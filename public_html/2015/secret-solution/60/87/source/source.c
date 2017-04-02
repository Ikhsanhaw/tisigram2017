#include <stdio.h>
#include <string.h>
#define MAX 35
typedef char string[MAX];
int main(){
	string kalimat;
	gets(kalimat);
	char kar1,kar2;
	scanf("\n%c%c",&kar1,&kar2);
	for( int i = 0 ; i < strlen(kalimat) ; i++ ){
		if (kalimat[i] == kar1) printf("%c",kar2);
		else if (kalimat[i] == kar2) printf("%c",kar1);
		else printf("%c",kalimat[i]);
	}
	printf("\n");
	return 0;
}