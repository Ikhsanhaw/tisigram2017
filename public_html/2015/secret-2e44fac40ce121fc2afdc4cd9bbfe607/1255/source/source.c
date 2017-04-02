/*
Program 	 	 : _Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
int main(){
	unsigned long x;
	int y=1;
	scanf("%lu",&x);
	while(x%2==0 && x>2){
		x=x/2;
		if(x%2==1){
			y=0;
		}
	}
	if(x>2||y==0){
		printf("FALSE\n");
	}else{
		printf("TRUE\n");
	}
return 0;
}

