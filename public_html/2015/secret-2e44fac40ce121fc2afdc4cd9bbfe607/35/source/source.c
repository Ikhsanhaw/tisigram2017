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
	long x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	if(x>5000){
		z=x-(y*x/100);
	}else{
		z=x;
	}
	printf("%d\n",z);
return 0;
}

