/* Program		: Halo dunia
	Deskripsi	: Halo dunia
	Nama		: Rizky Adam Prananda
	Tanggal		: 22 Maret 2016
	Versi		: v0.1
	Compiler	: Dev C++ 5.7.1
*/

#include <stdio.h>
#include <string.h>

int main(){
	char input;
	
	scanf("%c" , &input);
	input = toupper(input);
	
	if(input == 'A' || input == 'I' || input == 'U' || input == 'E' || input == 'O'){
		printf("True\n");
	}else{
		printf("False\n");
	}
	
	return 0;
}
