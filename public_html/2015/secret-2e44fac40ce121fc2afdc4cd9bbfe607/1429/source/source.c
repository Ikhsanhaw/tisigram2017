/*
Program 	 	 : _Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
#include <string.h>
int main(){
	char x[3000],y[3000],z[3000];
	int i,count=0;
	gets(x);
	scanf("%s",&y);
	for(i=0;i<=strlen(x);i++){
		strncpy(z,&x[i],strlen(y));
		if(strcmp(z,y)==0){
			count++;
		}
	}
	printf("%d\n",count);
return 0;
}

