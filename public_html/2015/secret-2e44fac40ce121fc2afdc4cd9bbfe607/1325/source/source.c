#include <stdio.h>


int main(){
	char text[2000];
	
	char kata[2000];
	gets(text);
	scanf("%s", &kata);
	
	int i,j;
	while(i<strlen[kata]){
		while(j<strlen[text]){
			if(kata[i] == text[j]){
				i++;
				break;		
			}
		}		
	}
	
}
