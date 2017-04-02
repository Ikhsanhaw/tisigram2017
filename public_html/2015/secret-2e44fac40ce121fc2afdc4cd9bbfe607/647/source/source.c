/*
Program 	 	 : H_Manhattan.c
Deskripsi 	 	 : 
Author           : Ujang Wahyu 
Compiler         : Dev-C++ 5.11
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int jarak;
	int x1,y1,x2,y2;
	
	scanf("%d %d %d %d\n", &x1,&y1,&x2,&y2);
	jarak = abs(x1-x2) + abs(y1-y2);
	
	printf("%d\n",jarak);
}

