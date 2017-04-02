#include <stdio.h>
#include <string.h>

int main(){
	char kata[50];
	int n,i;
	scanf("%d",&n);
	while(n>0){
		scanf("%s",kata);
		for(i=0;i<strlen(kata);i++){
			if(kata[i]%2!=1){
				printf("%c",kata[i]);
			}
		}
		n--;
	printf("\n");
	}
	//printf("\n");
	return 0;
}


