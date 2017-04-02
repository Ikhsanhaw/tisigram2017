#include<stdio.h>
#include<string.h>

void emptystring(char string[]);

int main(){
	char text[2000] ;
	char cari[25];
	char kata[25];
	int index, index1, j, k, sum, found,jmlkata=0;
	
	emptystring(kata);
	gets(text);
	gets(cari);
	index1 = 0;
	sum = 0;
	for (index = 0; index < strlen(text); index++){
		for (index1 = 0; index1 < strlen(cari); index1++){
			if (toupper(cari[index1]) == toupper(text[index])){
			sum++;
			}
		}
		
		if (sum == strlen(cari)){
			jmlkata++;
			sum = 0;
		}

	
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
