/*
Program 	 	 : H_Manhattan.c
Deskripsi 	 	 : 
Author           : Ujang Wahyu 
Compiler         : Dev-C++ 5.11
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
int main(){
	
	long int x1,y1,x2,y2;

	scanf("%ld",&x1);
	scanf("%ld",&y1);
	scanf("%ld",&x2);
	scanf("%ld",&y2);
	printf("%ld\n",abs((x2-x1)) + abs((y2-y1)));
	
	return 0;
}

