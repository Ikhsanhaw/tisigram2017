#include <stdio.h>
#include <string.h>

int main(){
	int jml,i,j;
	typedef struct word{
	char s[50];
	}words;
	words A[100];

	scanf("%d", &jml);
	for(i=0; i<jml; i++){
			scanf("%s", &A[i].s);
	
	}
	
	for(i=0;i<jml;i++){
		for(j=0;j<strlen(A[i].s);j++){
			if( A[i].s[j]%2==0){
			printf("%c", A[i].s[j]);
			}
		}
			printf("\n");
	}

	return 0;
}
