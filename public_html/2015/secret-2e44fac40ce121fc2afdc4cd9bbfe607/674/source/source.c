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
	
	int x1,y1,x2,y2;
	
	scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
	printf("%d\n",abs(x2-x1) + abs(y2-y1)) ;
	
	return 0;
}

