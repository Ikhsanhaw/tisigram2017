#include <stdio.h>
#include <string.h>

#define MAX 1005
typedef char string[MAX];

int main(){
	string text,find;
	int i,j;
	gets(text);
	gets(find);

	int listPos[strlen(text)/strlen(find)];
	int idx = 0;
	while(strstr(text,find)){
		char *hasSubstring = strstr(text,find);
		if (hasSubstring){
			string temp = "";
			int posSubs = hasSubstring-text; //posisi substring

			//pindahin dari text ke temp sampe sebelum awal dari substring
			for ( i = 0 ; i < posSubs ; i++ ){
				temp[i] = text[i];
			}
			
			//pindahin dari text ke temp , dari setelah substring sampeakhir text
			j = i;
			for ( i = posSubs + strlen(find) ; i < strlen(text) ; i++ ){
				temp[j] = text[i];
				j++;
			}
			temp[strlen(text)-strlen(find)] = '\0';
			strcpy(text,temp); //pindahin temp ke text;

			//copy posisi substring ke array
			listPos[idx] = posSubs;idx++;
		}
	}

	printf("%s\n",text);
	for ( i = 0 ; i < idx ; i++ ){
		printf("%d",listPos[i]);
		if (i!=idx-1) printf(" ");
	}
	printf("\n");
	return 0;
}