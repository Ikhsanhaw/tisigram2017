#include<stdio.h>
#include<string.h>

int main(){
	char kata[11];
	
	gets(kata);
	strrev(kata);
	printf("%s", kata);
	
	printf("\n");
	return 0;
}
