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
	char a,b;
	int i;
	scanf("%c",&a);
	scanf("%c",&b);
	for(i=a-1;i>b;i--){
		printf("%c\n",i);
	}
return 0;
}

