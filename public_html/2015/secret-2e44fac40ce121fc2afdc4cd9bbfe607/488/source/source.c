
#include <stdio.h>
int main()
{
	char text[2];
	
	scanf("%c", &text[1]);
	
	switch (tolower(text[1])){
		case 'a':
			printf("true\n");
			break;
		case 'i' : 
			printf("true\n");
			break;
		case 'u' : 
			printf("true\n");
			break;
		case 'e' : 
			printf("true\n");
			break;
		case 'o' : 
			printf("true\n");
			break;
	default : printf("false\n");
	}
	return 0;
	
	
}



