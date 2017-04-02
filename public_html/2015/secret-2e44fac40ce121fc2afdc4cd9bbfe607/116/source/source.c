#include <stdio.h>
#include <string.h>

int main(){
	char karakter[10];
	scanf("%s",&karakter);
	strrev(karakter);
	printf("%s\n",karakter);
	
	return 0;
}
