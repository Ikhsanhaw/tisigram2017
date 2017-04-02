#include<stdio.h>

int main()
	{
		char karakter;
		scanf("%c",&karakter);
		
		switch(karakter)
			{
				case 'a' :
					case 'A' : printf("True\n");
				break;
				case 'i' :
					case 'I' : printf("True\n");
				break;
				case 'u' :
					case 'U' : printf("True\n");
				break;
				case 'e' :
					case 'E' : printf("True\n");
				break;
				case 'o' :
					case 'O' : printf("True\n");
				break;
				default : printf("False\n");
				break;
			}
		
		return 0;
	}
