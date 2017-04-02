/*
Program 	 	 : K_HurufDiantara.c
Deskripsi 	 	 : 
Author           : Ujang Wahyu 
Compiler         : Dev-C++ 5.11
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
int main(){
	char huruf1,huruf2,i;
	scanf("%c %c",&huruf1,&huruf2);
	for(i=huruf1-1;i>huruf2;i--){
		printf("%c\n",i);
	}
return 0;
}
