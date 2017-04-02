/* Bukan Partikel Jepang - Solusi
 * Author: Muhammad Taufiq Pratama
 * Date: 04/04/2016
 * Version: 00
 */


#include <stdio.h>
#include <string.h>

int main ()
{
	char str[100];
	char* word[100];
	char* par[12] = {"de","e","ga","ka","mo","ne","ni","no","to","wa","wo","yo"};
	char* pch;
	int idx=0, idx1, idx2;
  
	if ( fgets(str, sizeof str, stdin) ) {
	
	// mengubah '\n' di akhir stream
	char *newline = strchr(str, '\n');
		if ( newline )
		{
			*newline = '\0';
		}
      	
      	// pemisahan kata dengan tokenisasi
		pch = strtok (str," ,.?!");
		while (pch != NULL)
		{
			word[idx] = pch;
	    	pch = strtok (NULL, " ,.?!");
	    	idx++;
		}
	}
	
	// string matching berkondisi
	for(idx1=0; idx1<idx; idx1++) {
		for(idx2=0; idx2<12; idx2++) {
			// jika mengandung substring yang mengindikasikan partikel
			if(strstr(word[idx1], par[idx2]) != NULL) {
				// filtering untuk partikel yang sebenarnya
				if(strcmp(word[idx1], par[idx2]) != 0) {
					printf("\"%s\" pada \"%s\" bukan partikel\n", par[idx2], word[idx1]);
				}
	  		}
		}
	}

	return 0;
}
