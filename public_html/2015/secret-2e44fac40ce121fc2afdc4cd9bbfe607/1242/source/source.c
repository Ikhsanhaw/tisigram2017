#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef char string[2005];
int main(){
	string text,find;
	int i,lengthText,lengthFind;
	gets(text);
	gets(find);
	lengthText = strlen(text);
	lengthFind = strlen(find);

	int count = 0;

	for ( i = 0 ; i < lengthText ; i++ ){
		if (text[i] == find[0]){
			bool found = true;
			int k = i + 1;
			for (int j = 1 ; (j < lengthFind) && found; j++){
				found = (text[k] == find[j]);
				k+=found;
			}
			count += found;
		}
	}
	printf("%d\n",count);
	return 0;
}