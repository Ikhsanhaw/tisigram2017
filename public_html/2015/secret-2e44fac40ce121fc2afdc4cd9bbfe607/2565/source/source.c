/*
Program 	 	 : _Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
#include<string.h>
int main(){
	int t,cek;
	char s[2000];
	scanf("%d",&t);
	while(t--){
		scanf("%s",&s);
		cek=0;
		if(strlen(s)>20){
			printf("false\n");
		}else if(strlen(s)==20){
			cek=strcmp(s,"18446744073709551615");
			if(cek==1) printf("false\n");
			else printf("true\n");
		}else{
			printf("true\n");
		}
		
	}
	return 0;
}

