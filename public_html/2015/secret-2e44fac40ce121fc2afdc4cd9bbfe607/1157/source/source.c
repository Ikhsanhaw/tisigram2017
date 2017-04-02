#include <stdio.h>
#include <string.h>

typedef struct{
	char kata[50];
}kalimat;

int main(){
	int t = 0, i = 0, j = 0;
	scanf("%d", &t);
	
	kalimat input[t];
	
	for(i=0; i<t; i++){
		scanf("%s", &input[i].kata);
	}
	
	for(i=0; i<t; i++){
		for(j=0; j<strlen(input[i].kata); j++){
			if((int)input[i].kata[j] % 2 != 1){
				printf("%c",input[i].kata[j]);
			}
		}
		printf("\n");
	}
	
	
	
	return 0;
}
