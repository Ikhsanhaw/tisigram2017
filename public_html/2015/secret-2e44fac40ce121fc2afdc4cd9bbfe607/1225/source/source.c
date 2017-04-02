#include <stdio.h>
#include <string.h>

int main(){
	int i,n;
	
	scanf("%d", &n);
	char str[n][50];
	
	for(i=0;i<n;i++){
		scanf("%s",&str[i]);		
	}
	
	int j;
	for(j=0;j<n;j++){	
		for(i=0;i<strlen(str[j]);i++){
			if(str[j][i]%2 == 0){
				printf("%c",str[j][i]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
