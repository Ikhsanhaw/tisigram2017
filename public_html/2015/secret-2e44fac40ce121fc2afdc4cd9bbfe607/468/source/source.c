 /*
Program 	 	 : B_BalikKata.c
Deskripsi 	 	 : 
Author           : Ujang Wahyu 
Compiler         : Dev-C++ 5.11
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/
#include <stdio.h>
#include <string.h>
int main(){
	char text[10];
	gets(text);
	int i;
	for(i=strlen(text)-1;i>=0;i--){
		printf("%c",text[i]);
	}
	printf("\n");
return 0;
}
