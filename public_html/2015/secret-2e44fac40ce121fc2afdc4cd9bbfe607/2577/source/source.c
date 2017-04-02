#include <stdio.h>
#include <string.h>

int main() {
	char A[101], B[301];
	int i, j;
	gets(A);
	
	for (j = 0,i = 0; i < strlen(A); i++) {
		B[j] = A[i];
		j++;
		switch(A[i]) {
			case 'a' : {
				B[j] = 'p';
				j++;
				B[j] = 'a'; 
				j++; } break;
			case 'i' : {
				B[j] = 'p';
				j++;
				B[j] = 'i'; 
				j++; } break;
			case 'u' : {
				B[j] = 'p';
				j++;
				B[j] = 'u'; 
				j++; } break;
			case 'e' : {
				B[j] = 'p';
				j++;
				B[j] = 'e'; 
				j++; } break;
			case 'o' : {
				B[j] = 'p';
				j++;
				B[j] = 'o'; 
				j++; } break; } }
	printf("%s\n", B);
	return 0; }
