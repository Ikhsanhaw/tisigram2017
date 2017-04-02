#include<stdio.h>
#include<string.h>

int main(){
	char kata[10];
	int hitung;
		
	scanf("%s",&kata);
	hitung =strlen(kata);
	for (hitung-1; hitung>0; hitung--){
		printf("%c",kata[hitung-1]);
	}
	printf("\n");
}
