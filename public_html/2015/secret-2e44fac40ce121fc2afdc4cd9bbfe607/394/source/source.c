#include <stdio.h>
#include <string.h>


int main(){
	/* Deklarasi */
	char text[2];
	int x=0;
	
	
	/* Algoritma */
	gets(text);
	switch(text[0]){
		case 'A':x=1;break;
		case 'a':x=1;break;
		case 'I':x=1;break;
		case 'i':x=1;break;
		case 'E':x=1;break;
		case 'e':x=1;break;
		case 'u':x=1;break;
		case 'U':x=1;break;
		case 'o':x=1;break;
		case 'O':x=1;break;
	}
	if(x==1){
		printf("True\n");
	}	else{
		printf("False\n");	
	}
	return 0;
}
