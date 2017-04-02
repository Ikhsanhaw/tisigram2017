#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char* string = malloc(sizeof(char) * 120);
	char* res = malloc(sizeof(char) * 120);
	int i=0, j=0;
	
	gets(string);
	while(i != strlen(string-1)) {
		switch(string[i]) {
			case 'a': res[j] = 'a'; j++; res[j] = 'p'; j++; break;
			case 'i': res[j] = 'i'; j++; res[j] = 'p'; j++; break;
			case 'u': res[j] = 'u'; j++; res[j] = 'p'; j++; break;
			case 'e': res[j] = 'e'; j++; res[j] = 'p'; j++; break;
			case 'o': res[j] = 'o'; j++; res[j] = 'p'; j++; break;
		}
		res[j] = string[i];
		i++;
		j++;
	}
	printf("%s\n",res);
}
