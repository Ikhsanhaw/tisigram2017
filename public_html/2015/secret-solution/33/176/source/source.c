#include <stdio.h>
#include <string.h>
int main(){
	char string[1000];
	gets(string);
	unsigned long i = string[strlen(string)-1]-48;
	i = (i*i)%2;
	printf("%d\n",i);
}
