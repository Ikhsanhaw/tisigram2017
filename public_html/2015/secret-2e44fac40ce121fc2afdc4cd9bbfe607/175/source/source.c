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
int a,b,enter;
	int i;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=b;i>a+1;i--){
		printf("%c ",i+64);
	}
	printf("%c\n",i+64);
return 0;
}

