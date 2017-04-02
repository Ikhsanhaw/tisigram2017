#include<stdio.h>

int main (){
	char huruf;
	int i;
	
	scanf("%c", &huruf);
	switch(huruf)
	{
		case 'A' : huruf = 'a'; break;
		case 'I' : huruf = 'i'; break;
		case 'E' : huruf = 'e'; break;
		case 'U' : huruf = 'u'; break;
		case 'O' : huruf = 'o'; break;
	}
	if((huruf == 'a') || (huruf == 'i') || (huruf == 'u') || (huruf == 'e') || (huruf == 'o'))
	{
		printf("True\n");
	} else {
		printf("False\n");
	}
	
	return 0;
}
