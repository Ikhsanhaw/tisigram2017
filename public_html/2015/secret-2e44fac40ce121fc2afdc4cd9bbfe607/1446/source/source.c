#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @auth 	: Muhamad Ismail
 * @date	: April 2, 2016
 * @desc 	: Program untuk mencari jumlah kata dalam kalimat.
 */

int main() {
	char text[2000];
	char find[2000];
	
	fgets(text, 60, stdin);
	fgets(find, 60, stdin);
	
	int i, j, letterFound, wordFound;
	
	wordFound = 0;
	
	for(i = 0; i < (int) (strlen(text) - 1); i++) {
		letterFound = 0;
		
		for(j=0; j < (int) (strlen(find) - 1); j++) {
			if( find[j] == text[i+j] ) {
				letterFound++;
			}
		}
		
		if(letterFound == (strlen(find) - 1)) {
			wordFound++;
		}
	}
	
	printf("%d", wordFound);
	
	return 0;
}
