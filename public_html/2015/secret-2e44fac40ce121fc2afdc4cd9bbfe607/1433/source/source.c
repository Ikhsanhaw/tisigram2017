/*
Program 	 	 : _Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
void gun(int x);
int main(){
	int x;
	scanf("%d",&x);
	gun(x);
return 0;
}

void gun(int x){
	int i;
	if(x==1){
		printf("*\n");
	}else{
		gun(x-1);
		for(i=1;i<=x;i++){
			printf("*");
		}
		printf("\n");
		gun(x-1);
	}
	
}
