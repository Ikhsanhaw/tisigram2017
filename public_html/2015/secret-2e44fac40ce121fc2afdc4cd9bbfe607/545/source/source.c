#include <stdio.h>
#include <string.h>

int main(){
	char kata[10];
	int jml,i;
	scanf("%s", &kata);
	jml = strlen(kata);
	for(i=jml-1;i>=0;i--){
	printf("%c", kata[i]);
	
	}
	return 0;
}
