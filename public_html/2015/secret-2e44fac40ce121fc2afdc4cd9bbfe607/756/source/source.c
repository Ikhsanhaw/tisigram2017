#include <stdio.h>
#include <string.h>

int main(){
	char kata[50];
	int n;
	scanf("%d",&n);
	while(n>=0){
		gets(kata);
		int i;
		for(i=0;i<strlen(kata);i++){
			if(kata[i]%2!=1){
				printf("%c",kata[i]);
			}
		}
		printf("\n");
		n--;
	}
	//printf("\n");
	return 0;
}
