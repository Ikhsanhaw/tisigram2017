#include <stdio.h>
#include <string.h>

int main(){
	int balik;
	char kata[10];
	
	scanf("%s",&kata);
	balik=strlen(kata);
	
	for(balik-1;balik>0;balik--){
		printf("%c", kata[balik-1]);
	}
	printf("\n");
	return 0;
}
