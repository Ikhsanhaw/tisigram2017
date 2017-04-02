#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1005
typedef char string[MAX];

void swap(char string1[], char string2[]){
	string temp;
	strcpy(temp,string1);
	strcpy(string1,string2);
	strcpy(string2,temp);
}

int main(){
	int i,j,N;
	scanf("%d\n",&N);
	string listOfName[N+5], maxString;
	for ( i = 0 ; i < N ; i++ )
		gets(listOfName[i]);

	for ( i = N-1 ; i >= 0 ; i-- ){
		strcpy(maxString,listOfName[i]);
		int iMax = i;
		for ( j = i-1 ; j >= 0 ;j--){
			if (strcmp(maxString,listOfName[j]) < 0){
				strcpy(maxString,listOfName[j]);
				iMax = j;
			}
		}

		if (iMax!=i){
			swap(listOfName[iMax],listOfName[i]);
			printf("%d %d\n",iMax+1,i+1);
		}

	}
	return 0;
}
