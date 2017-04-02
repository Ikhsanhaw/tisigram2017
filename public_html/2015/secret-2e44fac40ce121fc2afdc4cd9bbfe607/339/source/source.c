#include <stdio.h>
#include <string.h>

int main(){
	int i=0;
	int hitung;
	char kata[10];
	
	scanf("%s",&kata);
	hitung=strlen(kata);
	
	for(hitung-1;hitung>0;hitung--)
	{
	printf("%c", kata[hitung-1]);
	}
	printf("\n");
}
