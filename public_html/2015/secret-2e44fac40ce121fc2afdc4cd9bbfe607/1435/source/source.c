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
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	if(y==0){
		printf("%d %d\n",0,x);
	}else{
		printf("%d %d\n",x/y,x%y);
	}
	
return 0;	
}

