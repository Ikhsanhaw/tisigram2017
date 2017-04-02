#include<stdio.h>
#include<string.h>

void emptystring(char string[]);

int main(){
	char text[2000] ;
	char cari[25];
	char kata[25];
	int index, index1, index2, j, k, l,sum, found,jmlkata=0;
	
	emptystring(kata);
	gets(text);
	gets(cari);
	index1 = 0;
	sum = 0;
	for (index = 0; index <= strlen(text)-strlen(cari); index++){
		index2 = 0;
		kata[index2] = text[index];
		index2++;
		for (index1 = index+1; index1 < index + strlen(cari); index1++){
			kata[index2] = text[index1];
			index2++;
		}
		
		if (strcmp(kata, cari) == 0){
			jmlkata++;
		} 
		emptystring(kata);
	}
	
	printf("%d\n", jmlkata);
	return 0;
}

void emptystring(char string[]){
	int i;
	for (i = 0; i < strlen(string); i++){
		string[i] = ' ';
	}
}
