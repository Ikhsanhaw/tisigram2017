#include <stdio.h>
#include <string.h>

typedef char string[1005];
int main(){
	string chord;
	int i,minorCount = 0,sharpCount = 0;
	gets(chord);
	int length = strlen(chord);
	for ( i = 0 ; i < length ; i++ ){
		if (chord[i]=='#')
			sharpCount++;
		if (chord[i]=='m' && chord[i+1] ==' '){
			minorCount++;
		}
	}
	printf("%d %d\n",sharpCount,minorCount);
	return 0;
}
