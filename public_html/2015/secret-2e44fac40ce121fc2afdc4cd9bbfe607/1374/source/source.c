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
	for (index = 0; index <= strlen(text); index++){
		if (text[index] == ' ' || text[index] == '\0'){
			index1 = 0;
			k = 0;
			for (j = 0; j < strlen(cari); j++){
				found = 0;
				k = 0;
				while(k < strlen(kata) && found == 0){
					if (cari[j] == kata[k]){
						found = 1;
					}
					k++;
				}
				if (found == 1){
					sum++;
				}
			}
			if (sum == strlen(cari)){
				jmlkata++;
			}
			sum = 0;
			emptystring(kata);
		}
		else{
			kata[index1] = text[index];
			index1++;
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
