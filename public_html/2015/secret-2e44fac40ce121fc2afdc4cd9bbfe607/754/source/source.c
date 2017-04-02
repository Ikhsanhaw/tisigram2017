#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int n;
	
	char kata[50];
	int j;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		gets(kata);
		int i;
		for(i=0;i<strlen(kata);i++){
			if(kata[i]%2!=1){
				printf("%c",kata[i]);
			}
		}
		printf("\n");
	}	
	
	//printf("\n");
	return 0;
}
