#include <stdio.h>

int main(){
	char input[10], hasil[100];
	int jml, i, j = 0, c = 0;
	
	scanf("%d\n", &jml);
	
	for(i=0; i<jml; i++){
		gets(input);
		while(j<10 && input[j] != '\0'){
			if(input[j] == '0'){
				c++;
			}else{
				c = 0;
			}
			j++;
		}
		hasil[i] = c;
		c = 0;
		j = 0;
	}
	for(i=0; i<jml; i++){
		printf("%d\n", hasil[i]);
	}
}
