
#include <stdio.h>
int main()
{
	char text[2];
	
	scanf("%c", &text[1]);
	
	switch (tolower(text[1])){
		case 'a':
			printf("True\n");
			break;
		case 'i' : 
			printf("True\n");
			break;
		case 'u' : 
			printf("True\n");
			break;
		case 'e' : 
			printf("True\n");
			break;
		case 'o' : 
			printf("True\n");
			break;
	default : printf("False\n");
	}
	return 0;
	
	
}



